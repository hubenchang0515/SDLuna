local sdl = require("libsdluna")
local window = sdl.CreateWindow("Timer", 
								sdl.WINDOWPOS_UNDEFINED,
								sdl.WINDOWPOS_UNDEFINED,
								600, 400, 
								sdl.WINDOW_SHOWN)
local renderer = sdl.CreateRenderer(window, -1, sdl.RENDERER_ACCELERATED)

math.randomseed(os.time())
local counter1 = sdl.CreateCounter()
local counter2 = sdl.CreateCounter()
local counter3 = sdl.CreateCounter()
local rect1
local rect2
local rect3
while true do
	local event = sdl.PollEvent()
	if event ~= nil and event.type == sdl.EVENT_QUIT then
		break
	end
	
	if counter1:time(500) then
		rect1 = {50, 50, math.random(100), math.random(300)}
	end
	
	if counter2:time(2000) then
		rect2 = {250, 50, math.random(100), math.random(300)}
	end
	
	if counter3:time(4000) then
		rect3 = {450, 50, math.random(100), math.random(300)}
	end

	sdl.SetRenderDrawColor(renderer, 0,0,0,0)
	sdl.RenderClear(renderer)
	sdl.SetRenderDrawColor(renderer, 255,0,0,0)
	sdl.RenderFillRect(renderer, rect1)
	sdl.SetRenderDrawColor(renderer, 0,255,0,0)
	sdl.RenderFillRect(renderer, rect2)
	sdl.SetRenderDrawColor(renderer, 0,0,255,0)
	sdl.RenderFillRect(renderer, rect3)
	sdl.RenderPresent(renderer)
	
end