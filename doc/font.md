# Sound
Play sound.

# Type
* Font

# Method
* [OpenFont](#OpenFont)``(file, size)``
* [RenderText](#RenderText)``(renderer, font, text)``
* [RenderUTF8](#RenderUTF8)``(renderer, font, text)``
* [RenderUnicode](#RenderUnicode)``(renderer, font, text)``


## OpenFont
``OpenFont(file, size)``
Description : Load a font file  

Return   
* ``Font`` while successful
* ``nil`` while failed

Parameters
* ``file`` -- font file path
* ``size`` -- font size  

## RenderText
``RenderText(renderer, font, text)``
Description : Render font by Latin1  

Return   
* ``Texture`` while successful
* ``nil`` while failed

Parameters
* ``renderer`` -- Renderer
* ``font`` -- Font  
* ``text`` -- text content

## RenderUTF8
``RenderUTF8(renderer, font, text)``
Description : Render font by UTF8  

Return   
* ``Texture`` while successful
* ``nil`` while failed

Parameters
* ``renderer`` -- Renderer
* ``font`` -- Font  
* ``text`` -- text content

## RenderUnicode
``RenderUnicode(renderer, font, text)``
Description : Render font by Unicode  

Return   
* ``Texture`` while successful
* ``nil`` while failed

Parameters
* ``renderer`` -- Renderer
* ``font`` -- Font  
* ``text`` -- text content