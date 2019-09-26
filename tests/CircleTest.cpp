#define CATCH_CONFIG_MAIN
#include "vendor/catch.hpp"
#include "methods/circle/circle.h"

TEST_CASE("circle_calc_area: test if radius is given") {
    REQUIRE(Approx(circle_calc_area(0.5f, 25.0f).s_lower) == (1885.74f));
    REQUIRE(Approx(circle_calc_area(0.5f, 25.0f).s_upper) == (2042.82f));

    REQUIRE(Approx(circle_calc_area(0.05f, 25.0f).s_lower) == (1955.65f));
    REQUIRE(Approx(circle_calc_area(0.05f, 25.0f).s_upper) == (1971.36f));
}

TEST_CASE("circle_calc_area: test if area is given") {
    REQUIRE(Approx(circle_calc_area(0.5f, 0.0f, 54.0f).s_lower).epsilon(.01) == (4.13f));
    REQUIRE(Approx(circle_calc_area(0.5f, 0.0f, 54.0f).s_upper).epsilon(.01) == (4.17f));

    REQUIRE(Approx(circle_calc_area(0.05f, 0.0f, 54.0f).s_lower).epsilon(.01) == (4.14f));
    REQUIRE(Approx(circle_calc_area(0.05f, 0.0f, 54.0f).s_upper).epsilon(.01)  == (4.15f));
}

TEST_CASE("circle_calc_perimeter: test if radius and diameter is given") {
    REQUIRE(Approx(circle_calc_perimeter(0.5f, 5.0f, 10.0f).s_lower).epsilon(.01) == (28.27f));
    REQUIRE(Approx(circle_calc_perimeter(0.5f, 5.0f, 10.0f).s_upper).epsilon(.01) == (34.56f));

    REQUIRE(Approx(circle_calc_perimeter(0.05f, 5.0f, 10.0f).s_lower).epsilon(.1) == (31.1f));
    REQUIRE(Approx(circle_calc_perimeter(0.05f, 5.0f, 10.0f).s_upper).epsilon(.01) == (31.73f));
}

TEST_CASE("circle_calc_perimeter: test if radius is given") {
    REQUIRE(Approx(circle_calc_perimeter(0.5f, 5.0f).s_lower).epsilon(.01) == (28.27f));
    REQUIRE(Approx(circle_calc_perimeter(0.5f, 5.0f).s_upper).epsilon(.01) == (34.56f));

    REQUIRE(Approx(circle_calc_perimeter(0.05f, 5.0f).s_lower).epsilon(.1) == (31.1f));
    REQUIRE(Approx(circle_calc_perimeter(0.05f, 5.0f).s_upper).epsilon(.01) == (31.73f));
}

TEST_CASE("circle_calc_perimeter: test if diameter is given") {
    REQUIRE(Approx(circle_calc_perimeter(0.5f, 0.0f, 5.0f).s_lower).epsilon(.01) == (14.13f));
    REQUIRE(Approx(circle_calc_perimeter(0.5f, 0.0f, 5.0f).s_upper).epsilon(.01) == (17.27f));

    REQUIRE(Approx(circle_calc_perimeter(0.05f, 0.0f, 5.0f).s_lower).epsilon(.01) == (15.55f));
    REQUIRE(Approx(circle_calc_perimeter(0.05f, 0.0f, 5.0f).s_upper).epsilon(.01) == (15.85f));
}

TEST_CASE("circle_calc_perimeter: test if perimeter and radius is given") {
    REQUIRE(Approx(circle_calc_perimeter(0.5f, 5.0f, 0.0f, 10.0f).s_lower).epsilon(.01) == (9.00f));
    REQUIRE(Approx(circle_calc_perimeter(0.5f, 5.0f, 0.0f, 10.0f).s_upper).epsilon(.01) == (11.00f));

    REQUIRE(Approx(circle_calc_perimeter(0.05f, 5.0f, 0.0f, 10.0f).s_lower).epsilon(.1) == (9.9f));
    REQUIRE(Approx(circle_calc_perimeter(0.05f, 5.0f, 0.0f, 10.0f).s_upper).epsilon(.1) == (10.1f));
}

TEST_CASE("circle_calc_perimeter: test if perimeter and diameter is given") {
    REQUIRE(Approx(circle_calc_perimeter(0.5f, 0.0f, 5.0f, 10.0f).s_lower).epsilon(.01) == (2.25f));
    REQUIRE(Approx(circle_calc_perimeter(0.5f, 0.0f, 5.0f, 10.0f).s_upper).epsilon(.01) == (2.75f));

    REQUIRE(Approx(circle_calc_perimeter(0.05f, 0.0f, 5.0f, 10.0f).s_lower).epsilon(.01) == (2.475f));
    REQUIRE(Approx(circle_calc_perimeter(0.05f, 0.0f, 5.0f, 10.0f).s_upper).epsilon(.01) == (2.525f));
}

