# SDLuna
A SDL2 bind for Lua

## Version
Alpha 1.0

## Get Start
* Load SDLuna
```Lua
local sdl = require("libsdluna")
```

* Create a window
```Lua
local window = sdl.CreateWindow("SDLuna",                    -- Window Title
                                sdl.WINDOWPOS_UNDEFINED,     -- X pos of top-left
                                sdl.WINDOWPOS_UNDEFINED,     -- Y pos of top-left
                                1024,                        -- Width
                                768,                         -- Height
                                sdl.WINDOW_SHOWN)            -- Window State
```

* Create a renderer to draw
```Lua
local renderer = sdl.CreateRenderer(window,                   -- draw which window
                                    -1,                       -- -1 for most situation
                                    sdl.RENDERER_ACCELERATED) -- GPU or software
```

* Code the main loop of your program
```Lua
while true do
    -- exit while get quit event
    local event = sdl.PollEvent()
    if event ~= nil and event.type == sdl.EVENT_QUIT then
        break
    end
	
    -- clear window by black
    sdl.SetRenderDrawColor(renderer, 0,0,0,0)
    sdl.RenderClear(renderer)
    
    -- Your codes

    -- update window 
    sdl.RenderPresent(renderer)
end
```

## API Index
 - [x] [Window](window.md)
 - [x] [Render](render.md)
 - [x] [Draw](draw.md)
 - [ ] [Sound](sound.md)
 - [ ] [Event](event.md)
 - [ ] [Keyboard](keyboard.md)