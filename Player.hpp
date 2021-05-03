#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
namespace pandemic{
class Player{
    string name;
    public:
    Player(Board b,City c);
    Player& drive(City c);
    Player& fly_direct(City c);
    Player& fly_charter(City c);
    Player& fly_shuttle(City c);
    void build();
    void discover_cure(Color c);
    Player& treat(City c);
    string& role();
    Player& take_card(City c);
};
};