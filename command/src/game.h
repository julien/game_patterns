#ifndef __GAME_H__
#define __GAME_H__

#include <iostream>
#include "inputhandler.h"
#include "actor.h"

class Game {

public:
  Game();
  ~Game();
  void start();

private:
  Actor actor_;
  InputHandler inputHandler_;
};

#endif
