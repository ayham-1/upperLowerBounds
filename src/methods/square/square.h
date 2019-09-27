#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
//#include <math.h>
#include <cmath>
#include "defs.h"
#include <string>

auto sqr_calc_area(float max_error, float s=0.0f, float a=0.0f)->uplowBounds;
auto sqr_calc_perimeter(float max_error, float s=0.0f, float p=0.0f)->uplowBounds;

#endif
