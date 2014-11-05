#ifndef __GAME_H__
#define __GAME_H__

#include <iostream>
#include "inputhandler.h"

class Game {

public:
  Game();
  ~Game();
  void start();

private:
  InputHandler inputHandler;
};

#endif
