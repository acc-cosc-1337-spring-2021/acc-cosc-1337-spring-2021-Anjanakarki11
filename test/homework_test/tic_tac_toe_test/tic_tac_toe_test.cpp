#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify tic_tac_toe game") {

	tic_tac_toe testgame;
	testgame.start_game("X");
	testgame.mark_board(1);
	testgame.mark_board(2);
	testgame.mark_board(3);
	testgame.mark_board(4);
	testgame.mark_board(5);
	testgame.mark_board(7);
	testgame.mark_board(6);
	testgame.mark_board(9);
	testgame.mark_board(8);
	REQUIRE(testgame.game_over() == true);
	
}
