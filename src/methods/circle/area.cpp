#include "circle.h"

auto circle_calc_area(float max_error, float r, float a)->uplowBounds {
    auto answer = uplowBounds();

    if (a == 0.0f && r != 0.0f) {
        answer.s_lower = M_PI*(pow((r-max_error),2.0f)); 
        answer.s_upper = M_PI*(pow((r+max_error),2.0f)); 
        return answer;
    }
    else if (r == 0.0f && a != 0.0f) { // calc radius if it is required.
        answer.s_lower = sqrt((a-max_error)/M_PI);
        answer.s_upper = sqrt((a+max_error)/M_PI);
        return answer;
    }
    else if (a != 0.0f && r != 0.0f)
        throw std::invalid_argument("Everything is given, you should probably reconsider your life decisions.");
    else if (a == 0.0f && r == 0.0f)
        throw std::invalid_argument("Nothing computes to nothing.");

    return answer;
}
