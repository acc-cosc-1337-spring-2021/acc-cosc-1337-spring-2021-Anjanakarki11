#define "CATCH_CONFIG_MAIN"
#inclue "catch.hpp"
#include "decision.h"
#include "decision.cpp"
TEST_CASE("verify test configuration", "verification")
{
    REQUIRE(true == true);
}

TEST_CASE("Test get_letter_grade_using_if", "Enter grade in string")
{
    REQUIRE(get_letter_grade_using_if(95) == "A");
    REQUIRE(get_letter_grade_using_if(85) == "B");
    REQUIRE(get_letter_grade_using_if(75) == "C");
    REQUIRE(get_letter_grade_using_if(65) == "D");
    REQUIRE(get_letter_grade_using_if(50) == "F");
}

TEST_CASE("Test get_letter_grade_using_switch", "Enter grade in string")
{
    REQUIRE(get_letter_grade_using_switch(95) == "A");
    REQUIRE(get_letter_grade_using_switch(85) == "B");
    REQUIRE(get_letter_grade_using_switch(75) == "C");
    REQUIRE(get_letter_grade_using_switch(65) == "D");
    REQUIRE(get_letter_grade_using_switch(50) == "F");
}

