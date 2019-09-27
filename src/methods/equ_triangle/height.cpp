#include "equ_triangle.h"

auto etrian_calc_height(float me, float s, float h)->uplowBounds {
    auto answer = uplowBounds();

    if (h == 0.0f && s != 0.0f) {
        answer.s_lower = (sqrt(3)/2)*(s-me);
        answer.s_upper = (sqrt(3)/2)*(s+me);
        return answer;
    }
    else if (h != 0.0f && s == 0.0f) {
        answer.s_lower = (h-me)/(sqrt(3)/2);
        answer.s_upper = (h+me)/(sqrt(3)/2);
        return answer; 
    }
    else if (h != 0.0f && s != 0.0f)
        throw std::invalid_argument("Everything is given, you should probably reconsider your life descisions.");
    else if (h == 0.0f && s == 0.0f)
        throw std::invalid_argument("Nothing computes to nothing.");

    return answer;
}
