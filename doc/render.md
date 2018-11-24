# Renderer
* [CreateRenderer](#CreateRenderer)``(window, index, flag)``  
* [CreateTexture](#CreateTexture)``(renderer, format, access, width, height)`` 
* [SetRenderTarget](#SetRenderTarget)``(renderer, texture)`` 
* [SetRenderDrawColor](#SetRenderDrawColor)``(renderer, red, green, blue, alpha)``  
* [RenderClear](#RenderClear)``(renderer)``
* [RenderPresent](#RenderPresent)``(renderer)``
* [RenderCopy](#RenderCopy)``(renderer, texture, srcrect, dstrect)``  

## CreateRenderer
``CreateRenderer(window, index, flag)``  
Description : Create a renderer to draw  

Return   
* ``Renderer`` while successful
* ``nil`` while failed

Parameters
* ``window`` -- window to draw  
* ``index`` -- the index of the rendering driver to initialize , or -1
* ``flag`` -- renderer flag
  * ``RENDERER_SOFTWARE`` -- render by software  
  * ``RENDERER_ACCELERATED`` -- render by GPU  

## CreateTexture
``CreateTexture(renderer, format, access, width, height)``  
Description : Create a texture to cache frame  

Return   
* ``Texture`` while successful
* ``nil`` while failed

Parameters
* ``renderer`` -- renderer
* ``format`` -- color format
  * ``PIXELFORMAT_RGB888`` -- red(8bits) + green(8bits) + blue(8bits)  
  * ``PIXELFORMAT_RGBA8888`` -- red(8bits) + green(8bits) + blue(8bits) + alpha(8bits)  
* ``access`` -- access way
  * ``TEXTUREACCESS_TARGET`` -- can be used as a render target   
  * ``TEXTUREACCESS_STATIC`` -- changes rarely  
  * ``TEXTUREACCESS_STREAMING`` -- changes frequently  
* ``width`` -- width of texture
* ``height`` -- height of texture  

## SetRenderTarget
``SetRenderTarget(renderer, texture)``  
Description : Set the target texture of renderer    

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer
* ``texture`` -- texture or ``nil`` for the default render target(window)  

## SetRenderDrawColor  
``SetRenderDrawColor(renderer, red, green, blue, alpha)``  
Description : Set color

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer  
* ``red`` -- red channel from ``0`` to ``255``  
* ``green`` -- green channel from ``0`` to ``255``  
* ``blue`` -- blue channel from ``0`` to ``255``  
* ``alpha`` -- alpha channel from ``0`` to ``255``  

## RenderClear  
``RenderClear(renderer)``
Description : Clear the render target

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer  

## RenderPresent  
``RenderPresent(renderer)``
Description : Update the window 

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer  

## RenderCopy
``RenderCopy(renderer, texture, srcrect, dstrect)``  
Description : Copy texture to render target    

Return   
* ``0`` while successful
* ``-n`` while failed

Parameters
* ``renderer`` -- renderer
* ``texture`` -- the source texture  
* ``srcrect``  -- source texture area by Lua array ``{x, y, width. height}``  
* ``srcrect``  -- target area by Lua array ``{x, y, width. height}``  

