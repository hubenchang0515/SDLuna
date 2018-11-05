win = SDL_CreateWindow("hello", 100, 100, 300, 200, 0);
ren = SDL_CreateRenderer(win, -1, 0);

while SDL_PollEvent()['type'] ~= SDL_QUIT do
	SDL_SetRenderDrawColor(ren, 0,0,0,255)
	SDL_RenderClear(ren)
	SDL_SetRenderDrawColor(ren, 0,255,0,255)
	SDL_RenderDrawLine(ren, 0, 0, 640, 640)
	SDL_RenderPresent(ren)
end

SDL_DestroyRenderer(ren)
SDL_DestroyWindow(win)