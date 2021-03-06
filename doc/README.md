# SDLuna
A SDL2 bind for Lua

## Version
Alpha 1.0

## Get Start
* Require SDLuna
```Lua
-- require sdluna
local sdl = require("libsdluna")

-- if require failed , print error message
if type(sdl) == "string" then
    print(sdl)
end
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
    
    --[[
        Your codes 
    --]]

    -- update window 
    sdl.RenderPresent(renderer)
end
```

## API Index
 - [x] [Window](window.md)
 - [x] [Render](render.md)
 - [x] [Draw](draw.md)
 - [x] [Sound](sound.md)
 - [x] [Event](event.md)
 - [x] [Keyboard](keyboard.md)
 - [x] [Timer](timer.md)
 - [x] [Font](font.md)
