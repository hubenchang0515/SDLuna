local sdl = require("libsdluna")
local game = require("Game")
local racket = require("Racket")
local chunk = require("Chunk")
local ball = require("Ball")

-- draw
function draw(renderer)
	racket:draw(renderer)
	chunk:draw(renderer)
	ball:draw(renderer)
end

-- update
function update()
	racket:move(640)
	ball:update(640, 400, racket, game:window())
	chunk:update(ball, game:window())
end


game:init("打砖块", 640, 400)
racket:init(270,390,100,10)
chunk:init(640, 400)
ball:init(320, 370, 20)

chunk:fill()

game:setDraw(draw)
game:setUpdate(update)
game:execute()