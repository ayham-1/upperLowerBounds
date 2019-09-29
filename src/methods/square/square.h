#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <cmath>
#include <string>
#include "defs.h"

auto sqr_calc_area(float max_error, float s=0.0f, float a=0.0f)->uplowBounds;
auto sqr_calc_perimeter(float max_error, float s=0.0f, float p=0.0f)->uplowBounds;

#endif
