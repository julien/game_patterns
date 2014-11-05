#ifndef __INPUT_HANDLER_H__
#define __INPUT_HANDLER_H__

#include "command.h"
#include "actor.h"

const int BUTTON_X = 1;
const int BUTTON_Y = 2;
const int BUTTON_A = 3;
const int BUTTON_B = 4;

class InputHandler {
public:
  InputHandler();
  ~InputHandler();
  void handleInput(int button);
  void press(int button);
  bool isPressed(int button);

private:
  Actor actor_;
  int button_;

  Command * buttonX_;
  Command * buttonY_;
  Command * buttonA_;
  Command * buttonB_;
};

#endif
