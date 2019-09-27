#define CATCH_CONFIG_MAIN
#include "vendor/catch.hpp"
#include "methods/square/square.h"

TEST_CASE("sqr_calc_area: if side is given") {
    REQUIRE(Approx(sqr_calc_area(0.5f, 5.0f).s_lower).epsilon(.01) == (20.25f));
    REQUIRE(Approx(sqr_calc_area(0.5f, 5.0f).s_upper).epsilon(.01) == (30.25f));

    REQUIRE(Approx(sqr_calc_area(0.05f, 5.0f).s_lower).epsilon(.01) == (24.50f));
    REQUIRE(Approx(sqr_calc_area(0.05f, 5.0f).s_upper).epsilon(.01) == (25.50f));
}

TEST_CASE("sqr_calc_area: if area is given") {
    REQUIRE(Approx(sqr_calc_area(0.5f, 0.0f, 10.0f).s_lower).epsilon(.01) == (3.08f));
    REQUIRE(Approx(sqr_calc_area(0.5f, 0.0f, 10.0f).s_upper).epsilon(.01) == (3.24f));

    REQUIRE(Approx(sqr_calc_area(0.05f, 0.0f, 10.0f).s_lower).epsilon(.01) == (3.15f));
    REQUIRE(Approx(sqr_calc_area(0.05f, 0.0f, 10.0f).s_upper).epsilon(.01) == (3.17f));
}

