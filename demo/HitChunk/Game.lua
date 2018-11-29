local sdl = require("libsdluna")

local Game = {}

-- Create Game , can only invoke once
function Game:init(title, width, height)
	title = title or "SDLuna"
	self.width = self.width or  width or 800
	self.height = self.height or height or 450
	self.win = self.win or sdl.CreateWindow(title, 
									sdl.WINDOWPOS_UNDEFINED, 
									sdl.WINDOWPOS_UNDEFINED, 
									self.width, 
									self.height, 
									sdl.WINDOW_SHOWN);
	if self.win == nil then
		print(sdl.GetError())
		return false
	end
	
	self.ren = self.ren or sdl.CreateRenderer(self.win, -1, sdl.RENDERER_SOFTWARE);
	
	if self.ren == nil then
		print(sdl.GetError())
		return false
	end
	
	return true
end


-- Run game
function Game:execute()
	local counter = sdl.CreateCounter()
	while true do
		local event = sdl.PollEvent()
		if event == nil then
			
		elseif event['type'] == sdl.EVENT_QUIT then
			break
		else
			if self.dealEvent ~= nil then
				self.dealEvent(event)
			end
		end
		
		if counter:time(math.ceil(1000/60)) then
			sdl.SetRenderDrawColor(self.ren, 0, 0, 0, 0)
			sdl.RenderClear(self.ren)
			if self.draw ~= nil then
				self.draw(self.ren)
			end
			sdl.RenderPresent(self.ren)
			
			if self.update ~= nil then
				self.update()
			end
		end
	end
end


-- Get window pointer
function Game:window()
	return self.win
end


-- Get renderer pointer
function Game:renderer()
	return self.ren
end


-- Setting draw function
function Game:setDraw(callback)
	self.draw = callback
end


-- Setting update function
function Game:setUpdate(callback)
	self.update = callback
end


-- Setting deal event funtion
function Game:setDealEvent(callback)
	self.dealEvent = callback
end

function Game:window()
	return self.win
end

return Game