#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor front_intake(20);
inline pros::Motor middle_intake(21);
inline pros::Motor top_intake(12);
inline ez::Piston scraper('D', true);
inline ez::Piston bunny('H', true);
inline ez::Piston bunny_secondary('C', true);

// Or create a helper function to control both:
