#include "inputhandler.h"

InputHandler::InputHandler() {
  buttonA_ = new JumpCommand();
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

void InputHandler::handleInput(int button) {

  if (button == BUTTON_X)      buttonX_->execute(actor_);
  else if (button == BUTTON_Y) buttonY_->execute(actor_);
  else if (button == BUTTON_A) buttonA_->execute(actor_);
  else if (button == BUTTON_B) buttonB_->execute(actor_);

}

void InputHandler::press(int button) {
  if (button >= BUTTON_X && button <= BUTTON_B) {
    button_ = button;
  }
}

bool InputHandler::isPressed(int button) {
  return button_ == button;
}
