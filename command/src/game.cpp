#include "game.h"

Game::Game() {
  std::cout << "Game created" << std::endl;
}

Game::~Game() {
  std::cout << "Game destroyed" << std::endl;
}

void Game::start() {
  std::cout << "Starting game" << std::endl;

  inputHandler.handleInput(BUTTON_A);
}

