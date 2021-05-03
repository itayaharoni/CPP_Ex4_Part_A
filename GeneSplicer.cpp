#include <iostream>
#include <string>
using namespace std;
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "GeneSplicer.hpp"
namespace pandemic{
    GeneSplicer::GeneSplicer(Board b,City c): Player(b,c){}
};