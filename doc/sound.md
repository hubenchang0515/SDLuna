# Sound
* [LoadMusic](#LoadMusic)``(file)``
* [PlayMusic](#PlayMusic)``(music, loop)``  
* [PauseMusic](#PauseMusic)``()``  
* [ResumeMusic](#ResumeMusic)``()``  

## LoadMusic
``LoadMusic(file)``  
Description : Load a music file  

Return   
* ``Music`` while successful
* ``nil`` while failed

Parameters
* ``file`` -- music file path  

## PlayMusic
``PlayMusic(music, loop)``  
Description : Play a music  

Return   
* ``0`` while successful
* ``-n`` while failed  

Parameters
* ``music`` -- Music to play 
* ``loop`` -- if loop playing  


## PauseMusic
``PauseMusic()``  
Description : Pause playing music  

Return   
* ``0`` while successful
* ``-n`` while failed 


## ResumeMusic
``ResumeMusic()``  
Description : Resume playing music  

Return   
* ``0`` while successful
* ``-n`` while failed 
