# Breakout

W Kavanagh. June Summer 2024

## controls

A/D to move the paddle right and left.
P to pause.

## Powerups

big/small paddle (blue)
fast/slow ball (fancy yellow)
fire ball (green)

# Tasklist

## Suggested fixes

* Fix the compiler issues in the code

## Suggested tasks

* Implement mouse input for pad
* Improved VFX (ball trail, paddle hit response, brick particle destruction)
* Better UI (progress bar rather than timer for countdown).
* GameLoop
* Better ball physics (Box2D)
* Leaderboards
* More ball types (e.g., multiball, sticky ball [where you shoot the ball from the paddle every time], tiny ball, big ball, brick-tracking ball)
* Sounds with increasing tone between bounces.
* Implement commentary with calls to an LLM such as LLama

# Time Details and Changelist
<Add information to this section about the time you've taken for this task along with a professional changelist.>

10 mins
Created Server Solution 
Created Client Solution

20mins
Implemented server listening and client connecting
Having strange linking error, seems to be to do with the network library being set up wrong
in project settings but can't figure out why it's not wokring. Added networking library to 
linker dependencies but still not working

60mins
Fixed Linker issue, dependencies were only set in release mode not debug.
Successful client server connection with server version still wokring with no client connected.

120mins
switched to implementing space invaders that runs in paralell with breakout for cool hybrid
game. The game currently has a bunch of errors after I implemented player shooting and it's 
making me feel really dumb. Submission is due so submitting as is with compile errors but I'm
gonna go back and finish this cause it could be cool. 
