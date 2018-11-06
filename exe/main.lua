win = SDL_CreateWindow("hello", 100, 100, 210, 210, 0);
ren = SDL_CreateRenderer(win, -1, 0);

while SDL_PollEvent()['type'] ~= SDL_QUIT do
	-- Clear
	SDL_SetRenderDrawColor(ren, 0,0,0,255)
	SDL_RenderClear(ren)
	
	-- Draw
	SDL_SetRenderDrawColor(ren, 255,0,0,255)
	SDL_RenderFillRect(ren, {0,0,70,70})
	
	SDL_SetRenderDrawColor(ren, 0,255,0,255)
	SDL_RenderFillRect(ren, {0,70,70,70})
	
	SDL_SetRenderDrawColor(ren, 0,0,255,255)
	SDL_RenderFillRect(ren, {0,140,70,70})
	
	SDL_SetRenderDrawColor(ren, 255,255,0,255)
	SDL_RenderFillRect(ren, {70,0,70,70})
	
	SDL_SetRenderDrawColor(ren, 0,255,255,255)
	SDL_RenderFillRect(ren, {70,70,70,70})
	
	SDL_SetRenderDrawColor(ren, 255,0,255,255)
	SDL_RenderFillRect(ren, {70,140,70,70})
	
	SDL_SetRenderDrawColor(ren, 0,0,0,255)
	SDL_RenderFillRect(ren, {140,0,70,70})
	
	SDL_SetRenderDrawColor(ren, 127,127,127,255)
	SDL_RenderFillRect(ren, {140,70,70,70})
	
	SDL_SetRenderDrawColor(ren, 255,255,255,255)
	SDL_RenderFillRect(ren, {140,140,70,70})
	
	-- Display
	SDL_RenderPresent(ren)
end

SDL_DestroyRenderer(ren)
SDL_DestroyWindow(win)