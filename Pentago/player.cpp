#include "player.h"
#include "string"

Player::Player()
{
    this->color = true;
    this->name = "Mike";
}

Player::Player(std::string name, bool color)
{
    this->color = color;
    this->name = name;
}

void Player::changeColor(bool color)
{
    this->color = color;
}

void Player::changeName(std::string name)
{
    this->name = name;
}
