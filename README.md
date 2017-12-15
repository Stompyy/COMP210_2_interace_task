# comp210_02_1607539

## paper AR plane

![logo](https://github.com/Stompyy/COMP210_2_interace_task/blob/master/PaperARplaneMobile/comp210/PARLogo.png)  
![app icon](https://github.com/Stompyy/COMP210_2_interace_task/blob/master/PaperARplaneMobile/comp210/PaperARplaneMobile/Pap180.png)  

### Videos

Included a couple of videos. The important one is the PreReleaseBuild one which shows the augmented reality menu, where the screen is slowly folded away revealing the camera feed behind (sorry the audio is slightly out of sync, blame apple's new screen recording feature).  
It is marked as pre release because I am releasing it on the appStore (iOS) for ios11 devices with ARKIT. I have a devleoper acount etc and by the time this is being graded, it should have made it through apple's lengthy approval phase. Just search 'paper AR plane' (after probably 20/12/17) and you will find it!  
Also attached is my trello board of user stories, and my github repo is [linked here](https://github.com/Stompyy/COMP210_2_interace_task).  
Apologies to any examiners, in order to release for iOS, I had to do all my development on a mac, so building on any other OS may not work. Then again it may! Please feel free to try.  

### Creative commons licenses

I sourced audio from https://www.bensound.com/ 'cute.wav', free to use on commercial projects with attribution, and the font is 'JabJai' from https://www.dafont.com/mr-oak.d1427 a non attribution required, open to commercial use, free to use font. Both of which are referenced in the info on the main menu in game.  

## About the game

The game is calle 'paper AR plane', and requires the player to collect red balloons in the environment before a timer runs out. Collect enough and the player goes up a level, with either more balloons to collect, or less time to do so in.  High scores and last scores are saved. There are also power up ballons in purple and yellow, which will slow down and speed up the player respectively.  Strong colours, simple themes, and definitely the audio, suit this game towards children under 14 years of age.

The game is built in Unreal Engine using C++ and blueprints and uses apple's ARKIT plugin to use the depth sensing capability of the latest apple device's camera, to retrieve a real world location of a position on screen. Currently this is limited to horizontal planes, and is very accurate.  
I use this to firstly place a target position for the airplane to fly towards, with a given offset of flight height.  
Secondly to spawn in the balloons. This is not at a single point, rather a random point between two random locations, so the balloon will not always be at a point, BUT will be at an attainable position by flying between two points. This brings a puzzle aspect to the game where the player must look at the surroundings to work out between which high and low positions they must guide the airplane between, in order to get the collectible. The random position between the two is actually weighted on a bell curve, to encourage more 'middle' positions, to get the height difference needed to draw out this challenge in the game.  
Lastly when a balloon is collected, an audio sound is played. ARKIT will probe that balloon's location to see if there is any obstruction (the balloon is behind a chair for example), and adjust the volume suitably. This is not a perfect solution for spatialised sound, but I think a novel use of ARKIT, given it's limit to horizontal planes.

The largest challenges were to do with deploying to apple devices.  Maintaining the correct certificates, keys, id's, and profiles, is not as straightforward as it may seem. One incorrect entry in the info.plist can, and have, required complete rebuilds.

## Research

Many augmented reality games are being released for mobile devices, with Unity and Unreal Engines recent support for apple's ARKIT, many developers are experimenting with this new tool, and many consumers want to show off what their new device is capable of.  
Most games available, such as the best seller [Zombie Gunship Revenant AR](https://itunes.apple.com/us/app/zombie-gunship-revenant-ar/id1254976492?mt=8) simply map an existing game onto a detected plane. I could not find any which actively searched for new planes, and incorporated their differing positions into the game mode.  
This is where paper AR plane can stand out. Rather than adopt the environment as a base for it's gameplay, it actively searches for new planes, and dynamically picks new locations, for the player to engage with.

Link to YouTube video:  

<a href="http://www.youtube.com/watch?feature=player_embedded&v=qPQuvQqKprQ" target="Zombie Gunship Revenant AR"><img src="http://img.youtube.com/vi/qPQuvQqKprQ/0.jpg" 
alt="Zombie Gunship Revenant AR" width="480" height="360" border="10" /></a>

also [AR Clay Shooting](https://itunes.apple.com/gb/app/ar-clay-shooting/id1253385830?mt=8),  
[BATTLE BEARS ZOMBIES AR](https://itunes.apple.com/us/app/battle-bears-zombies-ar/id326979430?mt=8),  
[Space Shooter AR](https://itunes.apple.com/us/app/space-shooter-ar/id963122285?mt=8),   
[SpaceShooter - AugmentedReality](https://itunes.apple.com/gb/app/spaceshooter-augmentedreality/id1247861098?mt=8).

I have chosen to release paper AR plane on the worldwide iOS appstore for phones and tablets at a price of 99p, the lowest available bracket. With a target audience of parents of children under 14 years of age, who wish to keep them occupied in a non offensive, and colourful, game.

