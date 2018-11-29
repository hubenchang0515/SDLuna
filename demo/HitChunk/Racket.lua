local sdl = require("libsdluna")
local Racket = {}

function Racket:init(x, y, w, h)
	self._x = self._x or x
	self._y = self._y or y
	self._width = self._width or w
	self._height = self._height or h
end

function Racket:draw(renderer)
	sdl.SetRenderDrawColor(renderer, 0xe9,0x1e,0x63,0)
	sdl.FillRect(renderer, {self._x, self._y, self._width, self._height})
end

function Racket:move(border)
	if sdl.KeyPressed("left") then
		self._x = self._x - 10
	end
	
	if sdl.KeyPressed("right") then
		self._x = self._x + 10
	end
	
	if self._x < 0 then
		self._x = 0
	elseif self._x > border - self._width then
		self._x = border - self._width
	end
end

function Racket:x()
	return self._x
end

function Racket:y()
	return self._y
end

function Racket:width()
	return self._width
end

function Racket:height()
	return self._height
end


return Racket