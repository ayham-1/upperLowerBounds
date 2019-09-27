#include "parallelogram.h"

auto parall_calc_perimeter(float me, float b, float h, float p)->uplowBounds {
    auto answer = uplowBounds();

    if (p == 0.0f && (b != 0.0f || h != 0.0f)) {
        if (b != 0.0f && h != 0.0f) {
            answer.s_lower = 2*(h-me) + 2*(b-me);
            answer.s_upper = 2*(h+me) + 2*(b+me);
            return answer;
        }
        else throw std::invalid_argument("When parallelogram's perimeter is calculated, both hieght and base sides must be given.");
    }
    else if (p != 0.0f && (b == 0.0f || h == 0.0f)) {
        if (h == 0.0f && b == 0.0f)
            throw std::invalid_argument("When perimeter is given, either side base length or side hieght length must be given.");
        else if (h == 0.0f)
            throw std::invalid_argument("Can't calculate height from perimeter.");
        else if (b == 0.0f)
            throw std::invalid_argument("Can't calculate base from perimeter.");
    }
    else if (p != 0.0f && h != 0.0f && b != 0.0f)
        throw std::invalid_argument("Everything is given, you should probably reconsider your life decisions.");
    else if (p == 0.0f && h == 0.0f && b == 0.0f)
        throw std::invalid_argument("Nothing computes to nothing.");

    return answer;
}
