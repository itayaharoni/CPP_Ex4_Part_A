#pragma once
#include <iostream>
using namespace std;
#include "City.hpp"
#include "Color.hpp"

namespace pandemic{
class Board{
    int num_of_dice;
    public:
    int& operator[](City c);
    friend ostream& operator<<(ostream& output, Board b);
    bool is_clean() const;
    void remove_cures();
};
};