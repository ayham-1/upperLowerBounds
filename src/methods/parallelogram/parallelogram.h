#ifndef BOUNDS_PARALLELOGRAM_H
#define BOUNDS_PARALLELOGRAM_H

#include <iostream>
#include <math.h>
#include "defs.h"

auto parall_calc_area(float max_error, float b=0.0f, float h=0.0f, float a=0.0f)->uplowBounds;
auto parall_calc_perimeter(float max_error, float b=0.0f, float h=0.0f, float p=0.0f)->uplowBounds;

#endif
