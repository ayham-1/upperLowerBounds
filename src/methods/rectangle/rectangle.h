#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <math.h>
#include "defs.h"

auto rect_calc_area(float max_error, float b=0.0f, float h=0.0f, float a=0.0f)->uplowBounds;
auto rect_calc_perimeter(float max_error, float b=0.0f, float h=0.0f, float p=0.0f)->uplowBounds;

#endif
