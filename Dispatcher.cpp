#include <iostream>
#include <string>
using namespace std;
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include "Dispatcher.hpp"
namespace pandemic{
    Dispatcher::Dispatcher(Board b,City c):Player(b,c){}
};