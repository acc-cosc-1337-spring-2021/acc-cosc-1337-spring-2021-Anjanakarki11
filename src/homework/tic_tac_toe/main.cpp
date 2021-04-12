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
	//cout<<"Which player do you want X or O? \n";
	//cin>>choice;
	//game1.start_game(choice);
	
	int position_chosen;
	string continue_ = "y";
	while (continue_ == "y")
	{
		cout<<"Which player do you want X or O? \n";
		cin>>choice;
		game1.start_game(choice);
	
		
	
		while(game1.game_over() == false)
		{
			
			cout<<"Which position do you want to choose? \n";
			cin>>position_chosen;
			
			game1.mark_board(position_chosen);
			game1.display_board();
			game1.game_over();
		}
		cout<<"The winner is "<<game1.get_winner();
		cout<<"\n Do you want to continue the game(y/n)?: ";
		cin>>continue_;

	}
	return 0;
}