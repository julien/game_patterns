#include "game.h"

Game::Game() {
  std::cout << "Game created" << std::endl;
}

Game::~Game() {
  std::cout << "Game destroyed" << std::endl;
}

void Game::start() {
  std::cout << "Starting game" << std::endl;

  // 1st iteration
  // inputHandler_.handleInput(BUTTON_A);

  // 2nd iteration
  Command * command = inputHandler_.handleInput(BUTTON_A);
  if (command) {
    std::cout << "Found a command" << std::endl;
    command->execute(actor_);
  }
}

