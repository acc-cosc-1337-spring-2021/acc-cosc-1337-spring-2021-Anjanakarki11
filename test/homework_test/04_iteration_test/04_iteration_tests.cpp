#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);

}

TEST_CASE("Verify get_gc_content of dna") 
{
	REQUIRE( get_gc_content("AGCTATAG") == .375);
	REQUIRE( get_gc_content("CGCTATAG") == .50);
}
TEST_CASE("Verify get_reverse_string of dna") 
{
	REQUIRE( get_gc_content("AGCTATAG") == 'GATATCGA');
	REQUIRE( get_gc_content("CGCTATAG") == 'GATATCGC');
}

TEST_CASE("Verify get_dna_complement of dna") 
{
	REQUIRE( get_gc_content("AAAACCCGGT") == 'ACCGGGTTTT');
	REQUIRE( get_gc_content("CCCGGAAAAT") == 'ATTTTCCGGG');
}

