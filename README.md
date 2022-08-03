# where_is_the_ball

## Overview

Simple game, build with __C__ language. The game have one __main()__ method and one __play()__ function to shuffles positions and clculate how many "cash" you have. I`m using __char pionter__ to hold positions of the ball. With the __malloc()__ function i am allocate dynamically memory in the __HEAP__ and the end of the function using __free()__ function to deallocated this memory. To generate the positions I use a __random() generator__.

## Features

We have three ball positions __[X][O][X]__, where the __'O'__ is the ball.The computer shuffles the positions and the player has to guess which position the ball is in.
The player has a certain amount and on each shuffle of the positions bets a part of this amount.
If he guesses the position of the ball, the amount he has bet is doubled, and if he does not guess he loses the amount he has bet.
The game is played until the player runs out of the total amount or until he decides to end the game.

## Download

Just download or clone the repo:  
```
$ git clone https://github.com/lentqq/where_is_the_ball.git

```

## How to start

You need to have some kind of __IDE__ with the compiler for the c installerlanguage installed. I use [Visual Studio Code](https://code.visualstudio.com/download) and the [MinGW - Minimalist GNU for Windows](https://sourceforge.net/projects/mingw/) or [MinGW-w64](https://www.mingw-w64.org/) compiler.

To start, enter in terminal(__CMD__, __PowerShell__...):
* gcc .\main.c
* .\a.exe