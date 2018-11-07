local sdl = require("libsdluna")
local win = sdl.SDL_CreateWindow("hello", 100, 100, 210, 210, 0);
local ren = sdl.SDL_CreateRenderer(win, -1, 0);

while sdl.SDL_PollEvent()['type'] ~= sdl.SDL_QUIT do
	-- Clear
	sdl.SDL_SetRenderDrawColor(ren, 0,0,0,255)
	sdl.SDL_RenderClear(ren)
	
	-- Draw
	sdl.SDL_SetRenderDrawColor(ren, 255,0,0,255)
	sdl.SDL_RenderFillRect(ren, {0,0,70,70})
	
	sdl.SDL_SetRenderDrawColor(ren, 0,255,0,255)
	sdl.SDL_RenderFillRect(ren, {0,70,70,70})
	
	sdl.SDL_SetRenderDrawColor(ren, 0,0,255,255)
	sdl.SDL_RenderFillRect(ren, {0,140,70,70})
	
	sdl.SDL_SetRenderDrawColor(ren, 255,255,0,255)
	sdl.SDL_RenderFillRect(ren, {70,0,70,70})
	
	sdl.SDL_SetRenderDrawColor(ren, 0,255,255,255)
	sdl.SDL_RenderFillRect(ren, {70,70,70,70})
	
	sdl.SDL_SetRenderDrawColor(ren, 255,0,255,255)
	sdl.SDL_RenderFillRect(ren, {70,140,70,70})
	
	sdl.SDL_SetRenderDrawColor(ren, 0,0,0,255)
	sdl.SDL_RenderFillRect(ren, {140,0,70,70})
	
	sdl.SDL_SetRenderDrawColor(ren, 127,127,127,255)
	sdl.SDL_RenderFillRect(ren, {140,70,70,70})
	
	sdl.SDL_SetRenderDrawColor(ren, 255,255,255,255)
	sdl.SDL_RenderFillRect(ren, {140,140,70,70})
	
	-- Display
	sdl.SDL_RenderPresent(ren)
end

sdl.SDL_DestroyRenderer(ren)
sdl.SDL_DestroyWindow(win)