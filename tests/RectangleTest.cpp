#define CATCH_CONFIG_MAIN
#include "vendor/catch.hpp"
#include "methods/rectangle/rectangle.h"

TEST_CASE("rect_calc_area: test if base and height is given") {
    REQUIRE(Approx(rect_calc_area(0.5f, 5.0f, 5.0f).s_lower).epsilon(.01) == (20.25f));
    REQUIRE(Approx(rect_calc_area(0.5f, 5.0f, 5.0f).s_upper).epsilon(.01) == (30.25f));

    REQUIRE(Approx(rect_calc_area(0.05f, 5.0f, 5.0f).s_lower).epsilon(.01) == (24.50f));
    REQUIRE(Approx(rect_calc_area(0.05f, 5.0f, 5.0f).s_upper).epsilon(.01) == (25.50f));
}

TEST_CASE("rect_calc_area: test if area and base is given") {
    REQUIRE(Approx(rect_calc_area(0.5f, 5.0f, 0.0f, 10.0f).s_lower).epsilon(.1) == (1.72f));
    REQUIRE(Approx(rect_calc_area(0.5f, 5.0f, 0.0f, 10.0f).s_upper).epsilon(.1) == (2.33f));

    REQUIRE(Approx(rect_calc_area(0.05f, 5.0f, 0.0f, 10.0f).s_lower).epsilon(.01) == (1.97f));
    REQUIRE(Approx(rect_calc_area(0.05f, 5.0f, 0.0f, 10.0f).s_upper).epsilon(.01) == (2.03f));
}

TEST_CASE("rect_calc_area: test if area and height is given") {
    REQUIRE(Approx(rect_calc_area(0.5f, 0.0f, 5.0f, 10.0f).s_lower).epsilon(.1) == (1.72f));
    REQUIRE(Approx(rect_calc_area(0.5f, 0.0f, 5.0f, 10.0f).s_upper).epsilon(.1) == (2.33f));

    REQUIRE(Approx(rect_calc_area(0.05f, 0.0f, 5.0f, 10.0f).s_lower).epsilon(.01) == (1.97f));
    REQUIRE(Approx(rect_calc_area(0.05f, 0.0f, 5.0f, 10.0f).s_upper).epsilon(.01) == (2.03f));
}

TEST_CASE("rect_calc_perimeter: test if base and height is given") {
    REQUIRE(Approx(rect_calc_perimeter(0.5f, 5.0f, 5.0f).s_lower).epsilon(.1) == (18.0f));
    REQUIRE(Approx(rect_calc_perimeter(0.5f, 5.0f, 5.0f).s_upper).epsilon(.1) == (22.0f));

    REQUIRE(Approx(rect_calc_perimeter(0.05f, 5.0f, 5.0f).s_lower).epsilon(.01) == (19.8f));
    REQUIRE(Approx(rect_calc_perimeter(0.05f, 5.0f, 5.0f).s_upper).epsilon(.01) == (20.2f));
}

TEST_CASE("rect_calc_perimeter: test if perimeter and base is given") {
    REQUIRE(Approx(rect_calc_perimeter(0.5f, 5.0f, 0.0f, 15.0f).s_lower).epsilon(.01) == (1.75f));
    REQUIRE(Approx(rect_calc_perimeter(0.5f, 5.0f, 0.0f, 15.0f).s_upper).epsilon(.01) == (3.25f));

    REQUIRE(Approx(rect_calc_perimeter(0.05f, 5.0f, 0.0f, 15.0f).s_lower).epsilon(.001) == (2.425f));
    REQUIRE(Approx(rect_calc_perimeter(0.05f, 5.0f, 0.0f, 15.0f).s_upper).epsilon(.001) == (2.575f));
}

TEST_CASE("rect_calc_perimeter: test if perimeter and height is given") {
    REQUIRE(Approx(rect_calc_perimeter(0.5f, 0.0f, 5.0f, 15.0f).s_lower).epsilon(.01) == (1.75f));
    REQUIRE(Approx(rect_calc_perimeter(0.5f, 0.0f, 5.0f, 15.0f).s_upper).epsilon(.01) == (3.25f));

    REQUIRE(Approx(rect_calc_perimeter(0.05f, 0.0f, 5.0f, 15.0f).s_lower).epsilon(.001) == (2.425f));
    REQUIRE(Approx(rect_calc_perimeter(0.05f, 0.0f, 5.0f, 15.0f).s_upper).epsilon(.001) == (2.575f));
}


