# Introduction #

This page contains milestones for DS Paint. They have to be met before DS Paint can be released.

When committing a change that meets the milestone, prefix the message with 'Milestone nn:' when 'nn' is the milestone number.


## 0.1 ##

  * ~~Compiles and runs.~~
  * ~~Both screens will appear white~~
  * ~~Able to draw in black using the stylus~~
  * ~~Does not need to do anything else~~

## 0.2 ##

  * ~~Refactoring~~
  * ~~Change the namespace to DSPaint~~
  * ~~Implement the IPen interface and the Pen class.~~
  * ~~Implement the Canvas class.~~
  * ~~Move structs into classes.~~
  * ~~Fix [issue #2](https://code.google.com/p/dspaint/issues/detail?id=#2).~~
  * ~~Use PALib instead of libnds.~~

## 0.3 ##

  * ~~Clear the screen using a button and a confirmation prompt~~
  * ~~Change pen width~~
  * ~~Create a draw line method in the IPen interface~~

## 0.4 ##

  * ~~Refactor prompt actions into separate IOperationalMode~~
  * ~~Create modes for each IOperationalMode~~
  * ~~Make some of the IOperationalMode buttons do something~~ [r126](https://code.google.com/p/dspaint/source/detail?r=126)
  * ~~Allow mode to be changed~~ [r130](https://code.google.com/p/dspaint/source/detail?r=130)

## 0.5 ##

  * Able to change colour
  * Display help for current mode
  * Save the image