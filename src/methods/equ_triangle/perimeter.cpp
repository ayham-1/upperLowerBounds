#include "equ_triangle.h"

auto etrian_calc_perimeter(float me, float s, float p)->uplowBounds {
    auto answer = uplowBounds();

    if (p == 0.0f && s != 0.0f) {
        answer.s_lower = 3*(s-me);
        answer.s_upper = 3*(s+me);
        return answer;
    }
    else if (p != 0.0f && s == 0.0f) {
        answer.s_lower = (p-me)/3;
        answer.s_upper = (p+me)/3;
        return answer;
    }
    else if (p != 0 && s != 0.0f)
        throw std::invalid_argument("Everything is given, you should probably reconsider your life decisions.");
    else if (p == 0 && s == 0.0f)
        throw std::invalid_argument("Nothing computes to nothing.");

    return answer;
}
