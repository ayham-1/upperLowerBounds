#include "circle.h"

auto circle_calc_perimeter(float me, float r, float d, float p)->uplowBounds {
    auto answer = uplowBounds();
    if (p == 0.0f && (d != 0.0f || r != 0.0f)) {
        if (r != 0.0f) { // Calc p from radius.
            answer.s_lower = 2*M_PI*(r-me);
            answer.s_upper = 2*M_PI*(r+me);
            return answer;
        }
        else if (d != 0.0f) { // Calc p from diameter.
            answer.s_lower = M_PI*(d-me);
            answer.s_upper = M_PI*(d+me);
            return answer;
        }
        else throw std::invalid_argument("Diameter or radius must be given when calculating circumference.");

        return answer;
    }
    else if (p != 0.0f && (d == 0.0f || r == 0.0f)) {
        if (d != 0.0f) { // Find radius.
            answer.s_lower = (d-me)/2.0f;
            answer.s_upper = (d+me)/2.0f;
            return answer;
        }
        else if (r != 0.0f) { // Find diameter.
            answer.s_lower = (r-me)*2;
            answer.s_upper = (r+me)*2;
            return answer;
        }
        else throw std::invalid_argument("Radius or Diameter must be present to compute one when Circumference is given.");
    }
    else if (p != 0.0f && d != 0.0f && r != 0.0f)
        throw std::invalid_argument("Everything is given, Reconsider your life descisions.");
    else if (p == 0.0f && d == 0.0f  && r == 0.0f)
        throw std::invalid_argument("Nothing computes to nothing.");
    return answer;
}
