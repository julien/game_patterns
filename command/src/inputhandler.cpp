#include "inputhandler.h"

InputHandler::InputHandler() {
  buttonA_ = new MoveCommand(10, 10); // JumpCommand();
  buttonB_ = new ShootCommand();
  buttonX_ = new AttackCommand();
  buttonY_ = new ReloadCommand();
}

InputHandler::~InputHandler() {
  delete buttonA_;
  delete buttonB_;
  delete buttonX_;
  delete buttonY_;
}

// 1st iteration
// void InputHandler::handleInput(int button) {
//
//   if (button == BUTTON_X)      buttonX_->execute(actor_);
//   else if (button == BUTTON_Y) buttonY_->execute(actor_);
//   else if (button == BUTTON_A) buttonA_->execute(actor_);
//   else if (button == BUTTON_B) buttonB_->execute(actor_);
//
// }

// 2nd iteration
Command * InputHandler::handleInput(int button) {
  if (button == BUTTON_X)      return buttonX_;
  else if (button == BUTTON_Y) return buttonY_;
  else if (button == BUTTON_A) return buttonA_;
  else if (button == BUTTON_B) return buttonB_;

  return NULL;
}

void InputHandler::press(int button) {
  if (button >= BUTTON_X && button <= BUTTON_B) {
    button_ = button;
  }
}

bool InputHandler::isPressed(int button) {
  return button_ == button;
}
