# Draw

* [Point](#Point)``(renderer, x, y)`` 
* [Line](#Line)``(renderer, x1, y1, x2, y2)``
* [Rect](#Rect)``(renderer, rect)``
* [FillRect](#FillRect)``(renderer, rect)``
* [Circle](#Circle)``(renderer, x, y, r)``
* [FillCircle](#FillCircle)``(renderer, x, y, r)``  
* [Triangle](#Triangle)``(renderer, x1, y1, x2, y2, x3, y3)``
* [FillTriangle](#FillTriangle)``(renderer, x1, y1, x2, y2, x3, y3)``
* [Ellipse](#Ellipse)``(renderer, x, y, rx, ry)``
* [FillEllipse](#FillEllipse)``(renderer, x, y, rx, ry)``

## Point
``Point(renderer, x, y)``  
Description : Draw a point in render target

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer 
* ``x`` -- x position of point
* ``y`` -- y position of point

## Line
``Line(renderer, x1, y1, x2, y2)``  
Description : Draw a line in render target

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer 
* ``x1`` -- start x position of point
* ``y1`` -- start y position of point
* ``x2`` -- end x position of point
* ``y2`` -- end y position of point

## Rect
``Rect(renderer, rect)``  
Description : Draw a rectangle in render target

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer 
* ``rect`` -- rectangle by Lua array ``{x, y, width. height}`` 

## FillRect
``FillRect(renderer, rect)``  
Description : Draw a filled rectangle in render target

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer 
* ``rect`` -- rectangle by Lua array ``{x, y, width. height}`` 


## Circle
``Circle(renderer, x, y, r)``  
Description : Draw a circle in render target

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer 
* ``x`` -- x position of  center
* ``y`` -- y position of  center
* ``r`` -- radius

## FillCircle
``FillCircle(renderer, x, y, r)``  
Description : Draw a filled circle in render target

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer 
* ``x`` -- x position of  center
* ``y`` -- y position of  center
* ``r`` -- radius

## Triangle
``Triangle(renderer, x1, y1, x2, y2, x3, y3)``  
Description : Draw a triangle in render target

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer 
* ``x1`` -- x position of point1  
* ``y1`` -- y position of point1  
* ``x2`` -- x position of point2  
* ``y2`` -- y position of point2  
* ``x3`` -- x position of point3  
* ``y3`` -- y position of point3  

## FillTriangle
``FillTriangle(renderer, x1, y1, x2, y2, x3, y3)``  
Description : Draw a filled triangle in render target

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer 
* ``x1`` -- x position of point1  
* ``y1`` -- y position of point1  
* ``x2`` -- x position of point2  
* ``y2`` -- y position of point2  
* ``x3`` -- x position of point3  
* ``y3`` -- y position of point3  

## Ellipse
``Ellipse(renderer, x, y, rx, ry)``  
Description : Draw a ellipse in render target

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer 
* ``x`` -- x position of center
* ``y`` -- y position of center
* ``rx`` -- radius x axis
* ``ry`` -- radius y axis

## FillEllipse
``FillEllipse(renderer, x, y, rx, ry)``  
Description : Draw a filled ellipse in render target

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer 
* ``x`` -- x position of center
* ``y`` -- y position of center
* ``rx`` -- radius x axis
* ``ry`` -- radius y axis
