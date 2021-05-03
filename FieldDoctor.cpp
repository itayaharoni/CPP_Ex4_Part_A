#include <iostream>
#include <string>
using namespace std;
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "FieldDoctor.hpp"
namespace pandemic{
    FieldDoctor::FieldDoctor(Board b,City c):Player(b,c){}
};