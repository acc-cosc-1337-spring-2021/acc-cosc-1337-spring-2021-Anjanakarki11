#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
using std::make_unique;
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

TEST_CASE("Tests tic_tac_toe function")
{ 
	unique_ptr<tic_tac_toe> game1 = make_unique<tic_tac_toe_3>();
	game1->start_game("x");
	
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(6);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(9);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(8);
	REQUIRE(game1->game_over() == true);
	REQUIRE(game1->get_winner() == "C");

}
TEST_CASE("Test x wins in first column in tictactoe 3") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_3>();
	game1->start_game("x");
	
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false);
}
TEST_CASE("Test x wins second column in tictactoe3") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_3>();
	game1->start_game("x");
	
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(8);
	REQUIRE(game1->game_over() == false);
	
}	
TEST_CASE("Test x wins third column in tictactoe3") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_3>();
	game1->start_game("x");
	
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(6);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(9);
	REQUIRE(game1->game_over() == false);	
}
TEST_CASE("Test x wins first row") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_3>();
	game1->start_game("x");
	
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false);
	
}
TEST_CASE("Test x wins second row") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_3>();
	game1->start_game("x");
	
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(6);
	REQUIRE(game1->game_over() == false);
	
	
}
TEST_CASE("Test x wins third row") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_3>();
	game1->start_game("x");
	
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(8);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(9);
	REQUIRE(game1->game_over() == false);
	
}
TEST_CASE("Test x wins by 1, 5, 9") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_3>();
	game1->start_game("x");
	
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(9);
	REQUIRE(game1->game_over() == false);
	
}
TEST_CASE("Test x wins with 3, 5, 7") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_3>();
	game1->start_game("x");
	
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false);
	
}
TEST_CASE("Testing tic_tac_toe_4 function in test cases")
{
	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
	game1->start_game("x");
	
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(6);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(8);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(9);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(10);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(11);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(12);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(14);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(13);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(16);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(15);
	REQUIRE(game1->game_over() == true);
	REQUIRE(game1->get_winner() == "C");

}
TEST_CASE("x wins in the 1st column in tictactoe 4") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
	game1->start_game("x");
	
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(9);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(13);
	REQUIRE(game1->game_over() == false);
}
TEST_CASE("Test x wins in the 2nd column in tictactoe4") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
	game1->start_game("x");
	
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(6);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(10);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(9);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(14);
	REQUIRE(game1->game_over() == false);
	
	
}	
TEST_CASE("Test x wins in the 3rd column in tictactoe4") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
	game1->start_game("x");
	
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(11);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(9);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(15);
	REQUIRE(game1->game_over() == false);	
}
TEST_CASE("Test x wins in the 4th column in tictactoe4") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
	game1->start_game("x");
	
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(8);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(12);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(9);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(16);
	REQUIRE(game1->game_over() == false);	
}
TEST_CASE("Test x wins in the 1st row in tictactoe4") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
	game1->start_game("x");
	
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(6);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false);
	
	
}
TEST_CASE("Test x wins in the 2nd row in tictactoe4") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
	game1->start_game("x");
	
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(6);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(8);
	REQUIRE(game1->game_over() == false);
	
}

TEST_CASE("Test x wins in the 3rd row in tictactoe4") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
	game1->start_game("x");
	
	game1->mark_board(9);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(10);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(11);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(12);
	REQUIRE(game1->game_over() == false);
	
}
TEST_CASE("Test x wins in the 4th row in tictactoe4") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
	game1->start_game("x");
	
	game1->mark_board(13);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(14);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(15);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(16);
	REQUIRE(game1->game_over() == false);
	
}
TEST_CASE("Test x wins by 1, 6, 11, 16 in tictactoe4") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
	game1->start_game("x");
	
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(6);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(8);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(11);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(12);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(16);
	REQUIRE(game1->game_over() == false);
	
}
TEST_CASE("Test x wins with 4, 7, 10, 13") {

	std::unique_ptr <tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();
	game1->start_game("x");
	
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false); //o
	game1->mark_board(12);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(10);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(16);
	REQUIRE(game1->game_over() == false); //x
	game1->mark_board(13);
	REQUIRE(game1->game_over() == false);
	
}











