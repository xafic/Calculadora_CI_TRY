

/*#include "..\calculadora/SimpleCalc.h"
#include "..\calculadora/SimpleCalc.cpp"
*/

#define CATCH_CONFIG_MAIN

//#include "catch.hpp"

#include "../calc_main/SimpleCalc.h"

/*
TEST_CASE("Addition") {

    SimpleCalc calculator;

    REQUIRE(calculator.add(1.0, 2.0) == 3.0);
    REQUIRE(calculator.add(-1.0, 2.0) == 1.0);
    REQUIRE(calculator.add(0.0, 0.0) == 0.0);
}
*/




/*
TEST(Parsing, ParsingBasics)
{
	std::string input_data;
	std::vector<std::string> actual_output;
	std::vector<std::string> expected_output;

	input_data = "1 + 2";
	actual_output = parser(input_data);
	expected_output = { "1", "+", "2" };
	EXPECT_EQ(expected_output, actual_output);

	input_data = "    ( 20   * 5                )";
	actual_output = parser(input_data);
	expected_output = { "(", "20", "*", "5", ")" };
	EXPECT_EQ(expected_output, actual_output);

	input_data = "( x + ( 5 / y15 ) )";
	actual_output = parser(input_data);
	expected_output = { "(", "x", "+", "(", "5", "/", "y15", ")", ")"};
	EXPECT_EQ(expected_output, actual_output);

	input_data = "20*(3+x)";
	actual_output = parser(input_data);
	expected_output = { "20*(3+x)" };
	EXPECT_EQ(expected_output, actual_output);

	input_data = "10.42 + 20.69";
	actual_output = parser(input_data);
	expected_output = { "10.42", "+", "20.69" };
	EXPECT_EQ(expected_output, actual_output);
}*/