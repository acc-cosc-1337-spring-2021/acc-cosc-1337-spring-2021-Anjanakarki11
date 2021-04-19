#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify game ends when board is full") {

	tic_tac_toe testgame;
	testgame.start_game("x");
	
	testgame.mark_board(1);
	REQUIRE(testgame.game_over() == false);
	testgame.mark_board(2);
	REQUIRE(testgame.game_over() == false);
	testgame.mark_board(3);
	REQUIRE(testgame.game_over() == false);
	testgame.mark_board(4);
	REQUIRE(testgame.game_over() == false);
	testgame.mark_board(5);
	REQUIRE(testgame.game_over() == false);
	testgame.mark_board(7);
	REQUIRE(testgame.game_over() == false);
	testgame.mark_board(6);
	REQUIRE(testgame.game_over() == false);
	testgame.mark_board(9);
	REQUIRE(testgame.game_over() == false);
	testgame.mark_board(8);
	REQUIRE(testgame.game_over() == true);
	REQUIRE(testgame.get_winner() == "C");
	
}
TEST_CASE("Test win by first column, x wins first column") {

	tic_tac_toe board;
	board.start_game("x");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	
	
}
TEST_CASE("Test win by second column, x wins second column") {

	tic_tac_toe board;
	board.start_game("x");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(8);
	REQUIRE(board.game_over() == false);
	
	
}
TEST_CASE("Test win by third column, x wins third column") {

	tic_tac_toe board;
	board.start_game("x");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	
	
}
TEST_CASE("Test win by first row, x wins first row") {

	tic_tac_toe board;
	board.start_game("x");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	
	
}
TEST_CASE("Test win by second row, x wins second row") {

	tic_tac_toe board;
	board.start_game("x");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(6);
	REQUIRE(board.game_over() == false);
	
	
}
TEST_CASE("Test win by third row, x wins third row") {

	tic_tac_toe board;
	board.start_game("x");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(8);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	
	
}
TEST_CASE("Test win by diagonally(1) top left, x wins by 1, 5, 9") {

	tic_tac_toe board;
	board.start_game("x");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == false);
	
	
}
TEST_CASE("Test win by diagonally 2 bottom left, x wins with 3, 5, 7") {

	tic_tac_toe board;
	board.start_game("x");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == false);
	
	
}

TEST_CASE("Test win by O") {

	tic_tac_toe_manager manager;
	int a = 0;
	int b = 0;
	int c = 0;
	board.start_game("O");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == true);
	REQUIRE(board.game_over() == "O");
	manager.save_game(board);

	manager.save_game(board);
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(3);
	REQUIRE(board.game_over() == false);
	board.mark_board(9);
	REQUIRE(board.game_over() == true);
	REQUIRE(board.game_over() == "X");
	
}






