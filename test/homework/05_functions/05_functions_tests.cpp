#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_gc_content statement") {
	REQUIRE(get_gc_content("AGCTATAG") == .375);
	REQUIRE(get_gc_content("CGCTATAG") == .50);
	
	
}

TEST_CASE("Test get_dna_complement statement") {
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
	
}