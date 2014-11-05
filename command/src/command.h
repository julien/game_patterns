#ifndef __COMMAND_H__
#define __COMMAND_H__

#include "actor.h"

class Command {
public:
  virtual ~Command() {}
  virtual void execute(Actor& actor) = 0;
};

// Sub-classes for example usage

class ShootCommand : public Command {
public:
  virtual void execute(Actor& actor) {
    actor.shoot();
  }
};

class JumpCommand : public Command {
public:
  virtual void execute(Actor& actor) {
    actor.jump();
  }
};

class AttackCommand : public Command {
  public:
    virtual void execute(Actor& actor) {
      actor.attack();
    }
};

class ReloadCommand : public Command {
public:
  virtual void execute(Actor& actor) {
    actor.reload();
  }
};

class MoveCommand: public Command {
public:
  MoveCommand(float x, float y) :
    prevX_(0),
    prevY_(0),
    x_(x),
    y_(y) {}

  virtual void execute(Actor& actor) {
    prevX_ = actor.x();
    prevY_ = actor.y();
    actor.moveTo(x_, y_);
  }

private:
  float prevX_;
  float prevY_;
    float x_;
    float y_;
};


#endif

