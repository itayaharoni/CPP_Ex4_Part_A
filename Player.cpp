#include <iostream>
#include <string>
using namespace std;
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
namespace pandemic{
    Player::Player(Board b,City c){}
    Player& Player::drive(City c){ return *this; }
    Player& Player::fly_direct(City c){ return *this; }
    Player& Player::fly_charter(City c){ return *this; }
    Player& Player::fly_shuttle(City c){ return *this; }
    void Player::build(){}
    void Player::discover_cure(Color c){}
    Player& Player::treat(City c){ return *this; }
    string& Player::role(){ return this->name; }
    Player& Player::take_card(City c){ return *this; }
};