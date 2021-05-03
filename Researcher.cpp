#include <iostream>
#include <string>
using namespace std;
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
namespace pandemic{
    Researcher::Researcher(Board b,City c):Player(b,c){}
};