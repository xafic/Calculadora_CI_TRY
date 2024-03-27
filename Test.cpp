
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "SimpleCalc.h"

TEST_CASE("Arithmetic Operations") {
    SimpleCalc calculator;

    // Addition
    SECTION("Addition") {
        REQUIRE(calculator.add(0.0, 0.0) == 0.0);
        REQUIRE(calculator.add(1.0, 2.0) == 3.0);
        REQUIRE(calculator.add(-1.0, 1.0) == 0.0);
        REQUIRE(calculator.add(-1.0, -2.0) == -3.0);
    }

    // Subtraction
    SECTION("Subtraction") {
        REQUIRE(calculator.sub(0.0, 0.0) == 0.0);
        REQUIRE(calculator.sub(5.0, 2.0) == 3.0);
        REQUIRE(calculator.sub(-1.0, 1.0) == -2.0);
        REQUIRE(calculator.sub(-1.0, -2.0) == 1.0);
    }

    // Multiplication
    SECTION("Multiplication") {
        REQUIRE(calculator.mul(0.0, 0.0) == 0.0);
        REQUIRE(calculator.mul(3.0, 2.0) == 6.0);
        REQUIRE(calculator.mul(-1.0, 2.0) == -2.0);
        REQUIRE(calculator.mul(-2.0, -2.0) == 4.0);
    }

    // Division
    SECTION("Division") {
        REQUIRE(calculator.div(0.0, 1.0) == 0.0);
        REQUIRE(calculator.div(6.0, 2.0) == 3.0);
        REQUIRE(calculator.div(-8.0, 2.0) == -4.0);
        //REQUIRE_THROWS_WITH(calculator.div(5.0, 0.0), "Division by zero should throw an exception");
    }
}