#include "rectangle.h"

auto rect_calc_perimeter(float me, float b, float h, float p)->uplowBounds {
    auto answer = uplowBounds();

    if (p == 0.0f && (b != 0.0f || h != 0.0f)) {
        if (b != 0.0f && h != 0.0f) {
            answer.s_lower = 2*((b-me)+(h-me));
            answer.s_upper = 2*((b+me)+(h+me));
            return answer;
        }
        else throw std::invalid_argument("Both base and height should be given, to calculate perimeter");
    }
    else if (p != 0.0f && (b == 0.0f || h == 0.0f)) {
        if (b == 0.0f && h != 0.0f) {
            answer.s_lower = ((p-me)-2*(h+me))/2;
            answer.s_upper = ((p+me)-2*(h-me))/2;
            return answer;
        }
        if (h == 0.0f && b != 0.0f) {
            answer.s_lower = ((p-me)-2*(b+me))/2;
            answer.s_upper = ((p+me)-2*(b-me))/2;
            return answer;
        }
        else throw std::invalid_argument("Everything is given, you should probably reconsider your life decisions.");
    }
    else if (p != 0.0f && h != 0.0f && b != 0.0f)
        throw std::invalid_argument("Everything is given, you should probably reconsider your life decisions.");
    else if (p == 0.0f && h == 0.0f && b == 0.0f)
        throw std::invalid_argument("Nothings computes to nothing.");

    return answer;
}
