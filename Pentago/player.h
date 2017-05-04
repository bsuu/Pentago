#ifndef PLAYER_H
#define PLAYER_H

#include "string"

class Player
{
private:
    bool color;
    std::string name;
public:
    Player();
    Player(bool, std::string);
};

#endif // PLAYER_H
