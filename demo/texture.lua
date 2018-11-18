local sdl = require("libsdluna")
local window = sdl.CreateWindow("SDLuna", 
								sdl.WINDOWPOS_UNDEFINED, 
								sdl.WINDOWPOS_UNDEFINED,
								1024, 768,
								sdl.WINDOW_SHOWN)
local renderer = sdl.CreateRenderer(window, -1, sdl.RENDERER_ACCELERATED)
local texture = sdl.CreateTexture(renderer,
									sdl.PIXELFORMAT_RGBA8888,
									sdl.TEXTUREACCESS_TARGET,
									1024, 768)
math.randomseed(os.time())
while true do
	local event = sdl.PollEvent()
	if event ~= nil and event.type == sdl.EVENT_QUIT then
		break
	end
	
	sdl.SetRenderTarget(renderer, texture)
	sdl.SetRenderDrawColor(renderer, 0,0,0,0)
	sdl.RenderClear(renderer)
	sdl.SetRenderDrawColor(renderer, 255,0,0,0)
	sdl.RenderFillRect(renderer, {100, 50, math.random(500), math.random(500)})
	sdl.SetRenderTarget(renderer, nil)
	sdl.RenderCopy(renderer, texture)
	sdl.RenderPresent(renderer)
end
