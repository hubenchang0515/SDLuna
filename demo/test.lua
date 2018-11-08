local sdl = require("libsdluna")
local win = sdl.CreateWindow("hello", 100, 100, 210, 210, 0);
local ren = sdl.CreateRenderer(win, -1, 0);

while sdl.PollEvent()['type'] ~= sdl.EVENT_QUIT do
	-- Clear
	sdl.SetRenderDrawColor(ren, 0,0,0,255)
	sdl.RenderClear(ren)
	
	-- Draw
	sdl.SetRenderDrawColor(ren, 255,0,0,255)
	sdl.RenderFillRect(ren, {0,0,70,70})
	
	sdl.SetRenderDrawColor(ren, 0,255,0,255)
	sdl.RenderFillRect(ren, {0,70,70,70})
	
	sdl.SetRenderDrawColor(ren, 0,0,255,255)
	sdl.RenderFillRect(ren, {0,140,70,70})
	
	sdl.SetRenderDrawColor(ren, 255,255,0,255)
	sdl.RenderFillRect(ren, {70,0,70,70})
	
	sdl.SetRenderDrawColor(ren, 0,255,255,255)
	sdl.RenderFillRect(ren, {70,70,70,70})
	
	sdl.SetRenderDrawColor(ren, 255,0,255,255)
	sdl.RenderFillRect(ren, {70,140,70,70})
	
	sdl.SetRenderDrawColor(ren, 0,0,0,255)
	sdl.RenderFillRect(ren, {140,0,70,70})
	
	sdl.SetRenderDrawColor(ren, 127,127,127,255)
	sdl.RenderFillRect(ren, {140,70,70,70})
	
	sdl.SetRenderDrawColor(ren, 255,255,255,255)
	sdl.RenderFillRect(ren, {140,140,70,70})
	
	-- Display
	sdl.RenderPresent(ren)
end

sdl.DestroyRenderer(ren)
sdl.DestroyWindow(win)