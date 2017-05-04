#include "player.h"

#include "string"

Player::Player()
{
    this->color = true;

    if(this->color)
        this->name = "Bob";
    else
        this->name = "Mike";
}

Player::Player(bool color, std::string name)
{
    this->color = color;
    this->name = name;
}
