#include "triangle.h"

auto trian_calc_perimeter(float me, float p, float a, float b, float c)->uplowBounds {
    auto answer = uplowBounds();

    if (p == 0.0f && (a != 0.0f || b != 0.0f || c != 0.0f)) {
        if (a != 0.0f && b != 0.0f && c != 0.0f) {
            answer.s_lower = (a-me)+(b-me)+(c-me);
            answer.s_upper = (a+me)+(b+me)+(c+me);
            return answer;
        }
        else throw std::invalid_argument("When calculating for triangle perimeter, all sides length's must be present.");
    }
    else if (p != 0.0f && (a == 0.0f || b == 0.0f || c == 0.0f)) {
        if (a == 0.0f && b == 0.0f && c == 0.0f)
            throw std::invalid_argument("When calculating one of the sides, a, b, or c, atleast two must be given.");            
        else if (a == 0.0f && b != 0.0f && c != 0.0f) {
            answer.s_lower = (p-me)-((b+me)+(c+me));
            answer.s_upper = (p+me)-((b-me)+(c-me));
            return answer;
        }
        else if (b == 0.0f && a != 0.0f && c != 0.0f) {
            answer.s_lower = (p-me)-((a+me)+(c+me));
            answer.s_upper = (p+me)-((a-me)+(c-me));
            return answer;
        }
        else if (c == 0.0f && a != 0.0f && b != 0.0f) {
            answer.s_lower = (p-me)-((a+me)+(b+me));
            answer.s_upper = (p+me)-((a-me)+(b-me));
            return answer;
        }
    }

    return answer;
}
