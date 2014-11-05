#ifndef __ACTOR_H__
#define __ACTOR_H__

#include <iostream>

class Actor {

public:
  Actor();

  void jump();
  void shoot();
  void attack();
  void reload();
  void moveTo(float x, float y);

  float x();
  float y();

private:
  float x_;
  float y_;
};

#endif

