#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <math.h>

#include "defs.h"

auto circle_calc_area(float max_error, float r=0.0f, float a=0.0f)->uplowBounds;
auto circle_calc_perimeter(float max_error, float r=0.0f, float d=0.0f, float p=0.0f)->uplowBounds;

#endif
