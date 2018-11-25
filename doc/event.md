# Event
* [PollEvent](#PollEvent)``()``

## PollEvent
``PollEvent()``  
Description : Load a music file  

Return   
* ``Event`` while event got
* ``nil`` while no event

## Event Table Field
| Field         | type                      | x         | y         |  button       | key
| :-            | :-:                       | :-:       | :-:       | :-:           | :-:
|               | EVENT_QUIT                | ``nil``   | ``nil``   | ``nil``      | ``nil``
|               | EVENT_MOUSEBUTTONDOWN     | x         | y         | ``"left"``    | ``nil``
|               |                           |           |           | ``"right"``   |
|               |                           |           |           | ``"middle"``  |
|               |                           |           |           | ``"unknown"`` |
|               | EVENT_MOUSEBUTTONUP       | x         | y         | ``"left"``    | ``nil``
|               |                           |           |           | ``"right"``   |
|               |                           |           |           | ``"middle"``  |
|               |                           |           |           | ``"unknown"`` |