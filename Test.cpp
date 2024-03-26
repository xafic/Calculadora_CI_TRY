
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "SimpleCalc.h"

TEST_CASE("Addition") {
    SimpleCalc calculator;
    REQUIRE(calculator.add(1.0, 2.0) == 3.0);
}

TEST_CASE("Subtraction") {
    SimpleCalc calculator;
    REQUIRE(calculator.sub(3.0, 2.0) == 1.0);
}

TEST_CASE("Multiplication") {
    SimpleCalc calculator;
    REQUIRE(calculator.mul(3.0, 2.0) == 6.0);
}

TEST_CASE("Division") {
    SimpleCalc calculator;
    REQUIRE(calculator.div(6.0, 2.0) == 3.0);
   // REQUIRE_THROWS_WITH(calculator.div(6.0, 0.0), "Error! Division by zero is not allowed.");
}