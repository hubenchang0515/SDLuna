# Window
* [CreateWindow](#CreateWindow)``(title, x, y, width, height, flag)``  
* [HideWindow](#HideWindow)``(window)``   
* [ShowWindow](#ShowWindow)``(window)``  
* [MessageBox](#MessageBox)``(flags, title, message, window)``   

## CreateWindow  
``CreateWindow(title, x, y, width, height, flag)``  
Description : Create a Window  

Return  
* ``Window`` while successful
* ``nil`` while failed

Parameters
* ``title`` -- title of window  
* ``x`` -- x position of top-left
  * ``WINDOWPOS_CENTERED`` -- set position at center of screen
  * ``WINDOWPOS_UNDEFINED`` -- set position automatically
* ``y`` -- y position of top-left
  * ``WINDOWPOS_CENTERED`` -- set position at center of screen
  * ``WINDOWPOS_UNDEFINED`` -- set position automatically
* ``width`` -- width of window  
* ``height`` -- height of window  
* ``flag`` -- window flag  
  * ``WINDOW_SHOWN``  -- show window
  * ``WINDOW_HIDDEN`` -- hide window
  * ``WINDOW_RESIZABLE`` -- window could be resized

## HideWindow
``HideWindow(window)``  
Description : Hide a Window  

Return   
* ``void``  

Parameters
* ``window`` -- window to hide  

## ShowWindow
``ShowWindow(window)``  
Description : Show a Window  

Return   
* ``void``  

Parameters
* ``window`` -- window to Show

## MessageBox
``MessageBox(flags, title, message, window)``  
Description : Show a messgae box  
Return   
* ``0``  for success
* ``-n`` for failed

Parameters
* ``flags`` -- Type of message  
  * ``MESSAGEBOX_ERROR`` -- Error message  
  * ``MESSAGEBOX_WARNING``  -- Warning message  
  * ``MESSAGEBOX_INFORMATION`` -- Normal message  
* ``title`` -- title of message box
* ``message`` -- content of message box
* ``window`` -- lock which window or ``nil``