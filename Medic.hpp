#pragma once
#include <iostream>
using namespace std;
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
namespace pandemic{
class Medic: public Player{
    public:
    Medic(Board b,City c);
};
};