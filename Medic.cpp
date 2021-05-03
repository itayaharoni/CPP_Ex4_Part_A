#include <iostream>
using namespace std;
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "Medic.hpp"
namespace pandemic{
    Medic::Medic(Board b,City c): Player(b,c){}
};