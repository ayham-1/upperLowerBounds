#define CATCH_CONFIG_MAIN
#include "vendor/catch.hpp"
#include "methods/equ_triangle/equ_triangle.h"
#include <math.h>

TEST_CASE("etrian_calc_area: test if side is given") {
    REQUIRE(Approx(etrian_calc_area(0.5f, 5.0f).s_lower).epsilon(.01) == (8.77f));
    REQUIRE(Approx(etrian_calc_area(0.5f, 5.0f).s_upper).epsilon(.01) == (13.1f));

    REQUIRE(Approx(etrian_calc_area(0.05f, 5.0f).s_lower).epsilon(.01) == (10.61f));
    REQUIRE(Approx(etrian_calc_area(0.05f, 5.0f).s_upper).epsilon(.01) == (11.04f));
}

TEST_CASE("etrian_calc_area: test if area is given") {
    REQUIRE(Approx(etrian_calc_area(0.5f, 0.0f, 5.0f).s_lower).epsilon(.01) == (3.22f));
    REQUIRE(Approx(etrian_calc_area(0.5f, 0.0f, 5.0f).s_upper).epsilon(.01) == (3.56f));

    REQUIRE(Approx(etrian_calc_area(0.05f, 0.0f, 5.0f).s_lower).epsilon(.01) == (3.38f));
    REQUIRE(Approx(etrian_calc_area(0.05f, 0.0f, 5.0f).s_upper).epsilon(.01) == (3.41f));
}

TEST_CASE("etrian_calc_height: test if side is given") {
    REQUIRE(Approx(etrian_calc_height(0.5f, 5.0f, 0.0f).s_lower).epsilon(.01) == (3.89f));
    REQUIRE(Approx(etrian_calc_height(0.5f, 5.0f, 0.0f).s_upper).epsilon(.01) == (4.76f));

    REQUIRE(Approx(etrian_calc_height(0.05f, 5.0f, 0.0f).s_lower).epsilon(.01) == (4.28f));
    REQUIRE(Approx(etrian_calc_height(0.05f, 5.0f, 0.0f).s_upper).epsilon(.01) == (4.37f));
}

TEST_CASE("etrian_calc_height: test if height is given") {
    REQUIRE(Approx(etrian_calc_height(0.5f, 0.0f, 5.0f).s_lower).epsilon(.01) == (5.19f));
    REQUIRE(Approx(etrian_calc_height(0.5f, 0.0f, 5.0f).s_upper).epsilon(.01) == (6.35f));

    REQUIRE(Approx(etrian_calc_height(0.05f, 0.0f, 5.0f).s_lower).epsilon(.01) == (5.71f));
    REQUIRE(Approx(etrian_calc_height(0.05f, 0.0f, 5.0f).s_upper).epsilon(.01) == (5.83f));
}

TEST_CASE("etrian_calc_perimeter: test if side is given") {
    REQUIRE(Approx(etrian_calc_perimeter(0.5f, 5.0f).s_lower).epsilon(.1) == (13.5f));
    REQUIRE(Approx(etrian_calc_perimeter(0.5f, 5.0f).s_upper).epsilon(.1) == (16.5f));

    REQUIRE(Approx(etrian_calc_perimeter(0.05f, 5.0f).s_lower).epsilon(.01) == (14.85f));
    REQUIRE(Approx(etrian_calc_perimeter(0.05f, 5.0f).s_upper).epsilon(.01) == (15.15f));
}

TEST_CASE("etrian_calc_perimeter: test if perimeter is given") {
    REQUIRE(Approx(etrian_calc_perimeter(0.5f, 0.0f, 5.0f).s_lower).epsilon(.1) == (1.5f));
    REQUIRE(Approx(etrian_calc_perimeter(0.5f, 0.0f, 5.0f).s_upper).epsilon(.01) == (1.83f));

    REQUIRE(Approx(etrian_calc_perimeter(0.05f, 0.0f, 5.0f).s_lower).epsilon(.01) == (1.65f));
    REQUIRE(Approx(etrian_calc_perimeter(0.05f, 0.0f, 5.0f).s_upper).epsilon(.01) == (1.68f));
}

