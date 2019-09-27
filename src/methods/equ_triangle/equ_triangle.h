#ifndef EQU_TRIANGLE_H
#define EQU_TRIANGLE_H

#include <iostream>
#include <math.h>
#include "defs.h"

auto etrian_calc_area(float max_error, float s=0.0f, float a=0.0f)->uplowBounds;
auto etrian_calc_height(float max_error, float s=0.0f, float h=0.0f)->uplowBounds;
auto etrian_calc_perimeter(float max_error, float s=0.0f, float p=0.0f)->uplowBounds;

#endif
