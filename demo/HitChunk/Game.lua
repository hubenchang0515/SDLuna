local sdl = require("libsdluna")



local Game = {}

-- Create Game , can only invoke once
function Game:Create(title, width, height)
	title = title or "SDLuna"
	width = width or 800
	height = height or 450
	if self.win == nil and self.ren == nil then
		self.win = sdl.CreateWindow(title, 
									sdl.WINDOWPOS_UNDEFINED, 
									sdl.WINDOWPOS_UNDEFINED, 
									width, 
									height, 
									sdl.WINDOW_SHOWN);
		self.ren = sdl.CreateRenderer(self.win, -1, sdl.RENDERER_SOFTWARE);
		
		if self.win == nil or self.ren == nil then
			return false
		else
			return true
		end
	else
		return false
	end
end


-- Run game
function Game:start()
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

return Game