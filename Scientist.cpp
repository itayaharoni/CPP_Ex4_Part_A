#include <iostream>
#include <string>
using namespace std;
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "Scientist.hpp"
namespace pandemic{
    Scientist::Scientist(Board b,City c,int n): Player(b,c){}
};