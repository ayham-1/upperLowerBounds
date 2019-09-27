#include "square.h"

auto sqr_calc_area(float me, float s, float a)->uplowBounds {
    auto answer = uplowBounds();

    if (a == 0.0f && s != 0.0f) {
        answer.s_lower = pow((s-me), 2);
        answer.s_upper = pow((s+me), 2);
        return answer;
    }
    else if (a != 0.0f && s == 0.0f) {
        answer.s_lower = sqrt((a-me));
        answer.s_upper = sqrt((a+me));
        return answer;
    }
    else if (a != 0.0f && s != 0.0f)
        throw std::invalid_argument("Everything is given, you should probably reconsider your life decisions.");
    else if (a == 0.0f && s == 0.0f)
        throw std::invalid_argument("Noting computes to nothing.");

    return answer;
}
