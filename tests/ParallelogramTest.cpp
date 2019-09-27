#define CATCH_CONFIG_MAIN
#include "vendor/catch.hpp"
#include "methods/parallelogram/parallelogram.h"

TEST_CASE("parall_calc_area: test if base and height is given.") {
    REQUIRE(Approx(parall_calc_area(0.5f, 5.0f, 10.0f).s_lower).epsilon(.01) == (42.75f));
    REQUIRE(Approx(parall_calc_area(0.5f, 5.0f, 10.0f).s_upper).epsilon(.01) == (57.75f));

    REQUIRE(Approx(parall_calc_area(0.05f, 5.0f, 10.0f).s_lower).epsilon(.01) == (49.25f));
    REQUIRE(Approx(parall_calc_area(0.05f, 5.0f, 10.0f).s_upper).epsilon(.01) == (50.75f));
}

TEST_CASE("parall_calc_area: test if area and base is given.") {
    REQUIRE(Approx(parall_calc_area(0.5f, 5.0f, 0.0f, 10.0f).s_lower).epsilon(.01) == (1.72f));
    REQUIRE(Approx(parall_calc_area(0.5f, 5.0f, 0.0f, 10.0f).s_upper).epsilon(.01) == (2.33f));

    REQUIRE(Approx(parall_calc_area(0.05f, 5.0f, 0.0f, 10.0f).s_lower).epsilon(.01) == (1.97f));
    REQUIRE(Approx(parall_calc_area(0.05f, 5.0f, 0.0f, 10.0f).s_upper).epsilon(.01) == (2.03f));
}

TEST_CASE("parall_calc_area: test if area and height is given.") {
    REQUIRE(Approx(parall_calc_area(0.5f, 0.0f, 5.0f, 10.0f).s_lower).epsilon(.01) == (1.72f));
    REQUIRE(Approx(parall_calc_area(0.5f, 0.0f, 5.0f, 10.0f).s_upper).epsilon(.01) == (2.33f));

    REQUIRE(Approx(parall_calc_area(0.05f, 0.0f, 5.0f, 10.0f).s_lower).epsilon(.01) == (1.97f));
    REQUIRE(Approx(parall_calc_area(0.05f, 0.0f, 5.0f, 10.0f).s_upper).epsilon(.01) == (2.03f));
}

TEST_CASE("parall_calc_perimeter: test if base and height is given.") {
    REQUIRE(Approx(parall_calc_perimeter(0.5f, 5.0f, 5.0f).s_lower).epsilon(.01) == (18.00f));
    REQUIRE(Approx(parall_calc_perimeter(0.5f, 5.0f, 5.0f).s_upper).epsilon(.01) == (22.00f));

    REQUIRE(Approx(parall_calc_perimeter(0.05f, 5.0f, 5.0f).s_lower).epsilon(.1) == (19.8f));
    REQUIRE(Approx(parall_calc_perimeter(0.05f, 5.0f, 5.0f).s_upper).epsilon(.1) == (20.2f));
}
