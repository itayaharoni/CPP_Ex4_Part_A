#include <iostream>
#include <string>
using namespace std;
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "Virologist.hpp"
namespace pandemic{
    Virologist::Virologist(Board b,City c): Player(b,c){}
};