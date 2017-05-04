#ifndef PLAYER_H
#define PLAYER_H

#include "string"

class Player
{
private:
    std::string name;
    bool color;
public:
    Player();
    Player(std::string, bool);
    void changeName(std::string name);
    void changeColor(bool);
};

#endif // PLAYER_H
