#include "square.h"

auto sqr_calc_perimeter(float me, float s, float p)->uplowBounds {
    auto answer = uplowBounds();

    if (p == 0.0f && s != 0.0f) {
        answer.s_lower = 4*(s-me);
        answer.s_upper = 4*(s+me);
        return answer;
    }
    else if (p != 0.0f && s == 0.0f) {
        answer.s_lower = (s-me)/4;
        answer.s_upper = (s+me)/4;
        return answer;
    }
    else if (p != 0.0f && s != 0.0f)
        throw std::invalid_argument("Everything is given, you should probably reconsider your life decisions."); 
    else if (p == 0.0f && s == 0.0f)
        throw std::invalid_argument("Nothing computes to nothing.");

    return answer;
}
