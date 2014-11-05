#include "actor.h"

Actor::Actor() : x_(0), y_(0) {}

void Actor::jump() {
  printf("Actor Jumping\n");
}

void Actor::shoot() {
  printf("Actor shooting\n");
}

void Actor::attack() {
  printf("Actor attacking\n");
}

void Actor::reload() {
  printf("Actor reloading\n");
}

void Actor::moveTo(float x, float y) {
  x_ = x;
  y_ = y;

  printf("Actor position x: %f y: %f\n", x_, y_);
}

float Actor::x() { return x_; }
float Actor::y() { return y_; }
