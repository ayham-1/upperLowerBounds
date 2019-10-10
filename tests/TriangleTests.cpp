#define CATCH_CONFIG_MAIN
#include "vendor/catch.hpp"
#include "methods/triangle/triangle.h"

TEST_CASE("trian_calc_area: test if base and height is given") {
    REQUIRE(Approx(trian_calc_area(0.5f, 0.0f, 5.0f, 5.0f).s_lower).epsilon(.01) == (10.13f));
    REQUIRE(Approx(trian_calc_area(0.5f, 0.0f, 5.0f, 5.0f).s_upper).epsilon(.01) == (15.13f));

    REQUIRE(Approx(trian_calc_area(0.05f, 0.0f, 5.0f, 5.0f).s_lower).epsilon(.01) == (12.25f));
    REQUIRE(Approx(trian_calc_area(0.05f, 0.0f, 5.0f, 5.0f).s_upper).epsilon(.01) == (12.75f));
}

TEST_CASE("trian_calc_area: test if area and base is given") {
    REQUIRE(Approx(trian_calc_area(0.5f, 5.0f, 5.0f, 0.0f).s_lower).epsilon(1) == (2.00f));
    REQUIRE(Approx(trian_calc_area(0.5f, 5.0f, 5.0f, 0.0f).s_upper).epsilon(1) == (2.00f));

    REQUIRE(Approx(trian_calc_area(0.05f, 5.0f, 5.0f, 0.0f).s_lower).epsilon(1) == (2.00f));
    REQUIRE(Approx(trian_calc_area(0.05f, 5.0f, 5.0f, 0.0f).s_upper).epsilon(1) == (2.00f));
}

TEST_CASE("trian_calc_area: test if area and height is given") {
    REQUIRE(Approx(trian_calc_area(0.5f, 5.0f, 0.0f, 5.0f).s_lower).epsilon(1) == (2.00f));
    REQUIRE(Approx(trian_calc_area(0.5f, 5.0f, 0.0f, 5.0f).s_upper).epsilon(1) == (2.00f));

    REQUIRE(Approx(trian_calc_area(0.05f, 5.0f, 0.0f, 5.0f).s_lower).epsilon(1) == (2.00f));
    REQUIRE(Approx(trian_calc_area(0.05f, 5.0f, 0.0f, 5.0f).s_upper).epsilon(1) == (2.00f));
}

TEST_CASE("trian_calc_perimeter: test if a, b, and c is given") {
    REQUIRE(Approx(trian_calc_perimeter(0.5f, 0.0f, 5.0f, 5.0f, 5.0f).s_lower).epsilon(.1) == (13.5f));
    REQUIRE(Approx(trian_calc_perimeter(0.5f, 0.0f, 5.0f, 5.0f, 5.0f).s_upper).epsilon(.1) == (16.5f));

    REQUIRE(Approx(trian_calc_perimeter(0.05f, 0.0f, 5.0f, 5.0f, 5.0f).s_lower).epsilon(.01) == (14.85f));
    REQUIRE(Approx(trian_calc_perimeter(0.05f, 0.0f, 5.0f, 5.0f, 5.0f).s_upper).epsilon(.01) == (15.15f));
}

TEST_CASE("trian_calc_perimeter: test if periemter, b, and c is given") {
    REQUIRE(Approx(trian_calc_perimeter(0.5f, 5.0f, 0.0f, 5.0f, 5.0f).s_lower).epsilon(.1) == (-6.5f));
    REQUIRE(Approx(trian_calc_perimeter(0.5f, 5.0f, 0.0f, 5.0f, 5.0f).s_upper).epsilon(.1) == (-3.5f));

    REQUIRE(Approx(trian_calc_perimeter(0.05f, 5.0f, 0.0f, 5.0f, 5.0f).s_lower).epsilon(.01) == (-5.15f));
    REQUIRE(Approx(trian_calc_perimeter(0.05f, 5.0f, 0.0f, 5.0f, 5.0f).s_upper).epsilon(.01) == (-4.85f));
}

