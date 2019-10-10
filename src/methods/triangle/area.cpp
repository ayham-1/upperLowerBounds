#include "triangle.h"

auto trian_calc_area(float me, float a, float b, float h)->uplowBounds {
    auto answer = uplowBounds();

    if (a == 0.0f && (b != 0.0f || h != 0.0f)) {
        if (b != 0.0f && h != 0.0f) {
            answer.s_lower = (0.5f)*(b-me)*(h-me);
            answer.s_upper = (0.5f)*(b+me)*(h+me);
            return answer;
        }
        else
           throw std::invalid_argument("When calculating area of triangle, both height and base must be given.");
    }
    else if (a != 0.0f && (b == 0.0f || h == 0.0f)) {
        if (b == 0.0f && h == 0.0f)
            throw std::invalid_argument("When calculating base or height from area, atleast one of base or height must be given.");
        else if (b == 0.0f && h != 0.0f) {
            answer.s_lower = 2*((a-me)/(h+me));
            answer.s_upper = 2*((a+me)/(h-me));
            return answer;
        }
        else if (h == 0.0f && b != 0.0f) {
            answer.s_lower = 2*((a-me)/(b+me));
            answer.s_upper = 2*((a+me)/(b-me));
            return answer;
        }
    }
    return answer;
}

