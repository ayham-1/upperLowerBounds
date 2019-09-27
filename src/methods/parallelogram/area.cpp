#include "parallelogram.h"

auto parall_calc_area(float me, float b, float h, float a)->uplowBounds {
    auto answer = uplowBounds();

    if (a == 0.0f && (b != 0.0f || h != 0.0f)) {
        if (b != 0.0f && h != 0.0f) {
            answer.s_lower = (b-me)*(h-me);
            answer.s_upper = (b+me)*(h+me);
            return answer;
        }
        else
            throw std::invalid_argument("Both base and height should be given when calculating area of parallelogram");
    }
    else if (a != 0.0f && (b == 0.0f || h == 0.0f)) {
        if (b == 0.0f && h == 0.0f)
            throw std::invalid_argument("Area is given, but neither base nor height is given.");
        else if (b == 0.0f) { // Area and height is given.
            answer.s_lower = (a-me)/(h+me);
            answer.s_upper = (a+me)/(h-me);
            return answer;
        }
        else if (h == 0.0f) { // Area and base is given.
            answer.s_lower = (a-me)/(b+me);
            answer.s_upper = (a+me)/(b-me);
            return answer;
        }
    }
    else if (a != 0.0f && b != 0.0f && h != 0.0f)
        throw std::invalid_argument("Everything is given, you should probably reconsider your life decisions.");
    else if (a == 0.0f && b == 0.0f && h == 0.0f)
        throw std::invalid_argument("Nothing computes to nothing.");
    return answer;
}
