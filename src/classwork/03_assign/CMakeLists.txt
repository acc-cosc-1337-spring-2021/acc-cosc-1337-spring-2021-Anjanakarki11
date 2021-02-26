cmake_minimum_required (VERSION 3.8)
project(cw_03_library)

add_library(cw_03_library "decision.cpp" "decision.h")
add_executable(cw_03_exe "main.cpp" "decision.cpp")
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

