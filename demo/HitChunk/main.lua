local Game = require("Game")
local sdl = require("libsdluna")
function circle(renderer)
	sdl.SetRenderDrawColor(renderer, 0, 255, 0, 0)
	sdl.Circle(renderer, 100,100,100)
end
Game:Create()
Game:setDraw(circle)
Game:start()