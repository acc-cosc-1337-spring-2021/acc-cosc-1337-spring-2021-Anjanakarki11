#include "tic_tac_toe.h";
#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::cout; using std::cin;

int main() 

{
	string choice;
	tic_tac_toe game1;
	cout<<"Which player do you want X or O? \n";
	cin>>choice;
	game1.start_game(choice);
	
	int position_chosen;
	
	while(game1.game_over() == false)
	{
		cout<<"Which position do you want to choose? \n";
		cin>>position_chosen;
		game1.mark_board(position_chosen);
		game1.display_board();
	}

	
	return 0;
}