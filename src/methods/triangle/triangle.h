#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <cmath>
#include "defs.h"
#include <string>

auto trian_calc_area(float max_error, float a=0.0f, float b=0.0f, float h=0.0f)->uplowBounds;
auto trian_calc_perimeter(float max_error, float p=0.0, float a=0.0f, float b=0.0f, float c=0.0f)->uplowBounds;

#endif
