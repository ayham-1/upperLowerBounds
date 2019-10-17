#include "equ_triangle.h"

auto etrian_calc_area(float me, float s, float a)->uplowBounds {
    auto answer = uplowBounds();

    if (a == 0.0f && s != 0.0f) {
        answer.s_lower = (sqrt(3)/4)*(pow(s-me,2));
        answer.s_upper = (sqrt(3)/4)*(pow(s+me,2));
        return answer;
    }
    else if (a != 0.0f && s == 0.0f) {
        answer.s_lower = sqrt((4/sqrt(3)*(a-me)));
        answer.s_upper = sqrt((4/sqrt(3)*(a+me)));
        return answer;
    }
    else if (a != 0.0f && s != 0.0f)
        throw std::invalid_argument("Everythign is given, you should probably reconsider your life descisions.");
    else if (a == 0.0f && s == 0.0f)
        throw std::invalid_argument("Nothing computes to nothing.");

    return answer;
}
