local sdl = require("libsdluna")
local Ball = {}

function Ball:init(x, y, r)
	self._x = x
	self._y = y
	self._r = r or 10
	self.speed = {}
	self.speed.x = 3
	self.speed.y = -3
end

function Ball:draw(renderer)
	sdl.SetRenderDrawColor(renderer, 0xe9,0x1e,0x63,0)
	sdl.FillCircle(renderer, self._x, self._y, self._r, self._r)
end

function Ball:update(xWin, yWin, racket, win)
	self._x = self._x + self.speed.x
	self._y = self._y + self.speed.y
	if self._x - self._r < 0 or self._x + self._r > xWin then
		self.speed.x = - self.speed.x
	end
	
	if self._y - self._r < 0 then
		self.speed.y = - self.speed.y
	end
		
	if self._y + self._r > yWin then
		sdl.MessageBox(sdl.MESSAGEBOX_INFORMATION,"Failed","Failed", win)
		os.exit(0)
	end
	
	if self._x > racket:x() and  self._x < racket:x() + racket:width()
		and self._y + self._r > racket:y()
	then
		self.speed.y = - math.abs(self.speed.y)
	end
end

function Ball:bounce(xy)
	if xy == 'x' then
		self.speed.x = - self.speed.x
	elseif xy == 'y' then
		self.speed.y = - self.speed.y
	end
end

function Ball:x()
	return self._x
end

function Ball:y()
	return self._y
end

function Ball:r()
	return self._r
end

return Ball