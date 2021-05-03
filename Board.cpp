#include <iostream>
using namespace std;
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
namespace pandemic{
    int& Board::operator[](City c){
        return this->num_of_dice;
    }
    ostream& operator<<(ostream& output, Board b){
        return output;
    }
    bool Board::is_clean() const{
        return this->num_of_dice>0;
    }
    void Board::remove_cures(){}
};