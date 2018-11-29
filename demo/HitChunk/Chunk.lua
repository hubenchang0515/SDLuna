local sdl = require("libsdluna")
local Chunk = {}

function Chunk:init(wWin, hWin)
	self.width  = math.ceil(wWin / 10)
	self.height = math.ceil(hWin / 20)
	self.quantity = 0
	self.obj = {}
	for i = 1,10 do
		self.obj[i] = {}
	end
end

function Chunk:add(x, y, r, g, b)
	if x < 1 or x > 10 or y < 1 or y > 10 then
		print("Chunk : must let 1 <= x <= 10 and 1 <= y <= 10")
		return false
	end
	
	if self.obj[y][x] ~= nil then
		print(string.format("Chunk : %d,%d has chunk already", x, y))
		return false
	end
	
	r = r or 0xe9
	g = g or 0x1e
	b = b or 0x63
	self.obj[y][x] = {r=r, g=g, b=b}
	self.quantity = self.quantity + 1
end

function Chunk:fill()
	math.randomseed(os.time())
	for y = 1,10 do
		for x = 1,10 do
			self:add(x, y, math.random(0,255), math.random(0,255), math.random(0,255))
		end
	end
end


function Chunk:draw(renderer)
	for y = 1,10 do
		for x = 1,10 do
			if self.obj[y][x] ~= nil then
				sdl.SetRenderDrawColor(renderer, 
										self.obj[y][x].r, 
										self.obj[y][x].g, 
										self.obj[y][x].b, 
										0)
				sdl.FillRect(renderer, {self.width * (x-1), self.height * (y-1), self.width, self.height})
				sdl.SetRenderDrawColor(renderer, 
										255 - self.obj[y][x].r, 
										255 - self.obj[y][x].g, 
										255 - self.obj[y][x].b, 
										0)
				sdl.Rect(renderer, {self.width * (x-1), self.height * (y-1), self.width, self.height})
			end
		end
	end
end


function Chunk:update(ball, win)
	for y = 1,10 do
		for x = 1,10 do
			if self.obj[y][x] ~= nil then
				if ball:x() > self.width * (x-1) and ball:x() < self.width * x
					and ball:y() + ball:r() > self.height * (y-1) and ball:y() - ball:r() < self.height * y 
				then
					self.obj[y][x] = nil
					ball:bounce('y')
					self.quantity = self.quantity - 1
					if self.quantity == 0 then
						sdl.MessageBox(sdl.MESSAGEBOX_INFORMATION,"Victory","Victory", win)
						os.exit(0)
					end
				end
			end
		end
	end
end

return Chunk