# Timer
Check time. 

# Method
* [CreateCounter](#CreateCounter)``()``

## CreateCounter
``CreateCounter()``
Description : Create a counter

Return
* ``Counter`` a counter

## Counter:time(n)
Description : Check counter

Return
* ``true`` if counter more than ``n`` milli-seconds or call this function first time , then update counter
* ``false`` if NO more than ``n`` milli-seconds , not update counter

## Example
Print ``-`` every seconds and print ``+`` every two seconds.
```Lua
local sdl = require("libsdluna")
local counter1 = sdl.CreateCounter()
local counter2 = sdl.CreateCounter()
counter1:time(0) -- update counter
counter2:time(0) -- update counter
while true do
    if counter1:time(1000) then
        io.write("-")
    end
    if counter2:time(5000) then
        io.write("+")
    end
end
```