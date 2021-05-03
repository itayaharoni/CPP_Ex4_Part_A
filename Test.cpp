#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
using namespace pandemic;
#include "doctest.h"
#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;


TEST_CASE("Testing Player methods.") {
    Board board;
    Player p1{board, City::Atlanta};
    CHECK_THROWS(p1.drive(City::LosAngeles));
    CHECK_NOTHROW(p1.drive(City::Chicago));
    CHECK_THROWS(p1.drive(City::Miami));
    CHECK_NOTHROW(p1.drive(City::LosAngeles));
    CHECK_THROWS(p1.fly_direct(City::London));
    p1.take_card(City::London);
    CHECK_NOTHROW(p1.fly_direct(City::London));
    CHECK_THROWS(p1.fly_charter(City::LosAngeles));
    p1.take_card(City::London);
    CHECK_NOTHROW(p1.fly_charter(City::LosAngeles));
    p1.take_card(City::LosAngeles).take_card(City::LosAngeles).take_card(City::Mumbai);
    p1.build();
    p1.fly_charter(City::Mumbai);
    CHECK_THROWS(p1.fly_shuttle(City::LosAngeles));
    p1.build();
    CHECK_NOTHROW(p1.fly_shuttle(City::LosAngeles));
    CHECK_THROWS(p1.discover_cure(Color::Red));
    p1.take_card(City::Bangkok).take_card(City::Bangkok).take_card(City::Bangkok).take_card(City::Bangkok).take_card(City::Bangkok);
    CHECK_NOTHROW(p1.discover_cure(Color::Red));
    CHECK(p1.role()=="Player");
}

TEST_CASE("Testing Player child classes.") {
    Board b;
    OperationsExpert p1{b,City::BuenosAires};
    CHECK(p1.role()=="OperationsExpert");
    CHECK_NOTHROW(p1.build());
    Dispatcher p2{b,City::BuenosAires};
    CHECK_NOTHROW(p2.fly_direct(City::Jakarta));
    Scientist p3{b,City::BuenosAires,0};
    CHECK_NOTHROW(p3.discover_cure(Color::Black));
    Researcher p4{b,City::MexicoCity};
    p4.take_card(City::MexicoCity).take_card(City::MexicoCity).take_card(City::MexicoCity).take_card(City::MexicoCity).take_card(City::MexicoCity);
    CHECK_NOTHROW(p4.discover_cure(Color::Yellow));
    Board b2;
    GeneSplicer p5{b2,City::SanFrancisco};
    p5.take_card(City::SanFrancisco);
    p5.build();
    p5.take_card(City::SanFrancisco).take_card(City::Mumbai).take_card(City::Beijing);
    p5.take_card(City::SanFrancisco).take_card(City::Mumbai);
    CHECK_NOTHROW(p5.discover_cure(Color::Yellow));
    FieldDoctor p6{b2,City::Lagos};
    CHECK_NOTHROW(p6.treat(City::Kinshasa));
    Virologist p7{b2,City::Lagos};
    CHECK_THROWS(p7.treat(City::Chicago));
    p7.take_card(City::Chicago);
    CHECK_NOTHROW(p7.treat(City::Chicago));
    b2[City::Kolkata]=5;
    Medic p8{b2,City::Kolkata};
    p8.treat(City::Kolkata);
    CHECK(b2[City::Kolkata]==0);
}

