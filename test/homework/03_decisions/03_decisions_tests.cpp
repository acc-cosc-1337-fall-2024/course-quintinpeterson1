#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if statement") {
	REQUIRE(get_letter_grade_using_if(50) == "F");
	REQUIRE(get_letter_grade_using_if(60) == "D");
	REQUIRE(get_letter_grade_using_if(70) == "C");
	REQUIRE(get_letter_grade_using_if(80) == "B");
	REQUIRE(get_letter_grade_using_if(90) == "A");
}

TEST_CASE("Test switch statement") {
	REQUIRE(get_letter_grade_using_switch(50) == "F");
	REQUIRE(get_letter_grade_using_switch(60) == "D");
	REQUIRE(get_letter_grade_using_switch(70) == "C");
	REQUIRE(get_letter_grade_using_switch(80) == "B");
	REQUIRE(get_letter_grade_using_switch(90) == "A");
}
