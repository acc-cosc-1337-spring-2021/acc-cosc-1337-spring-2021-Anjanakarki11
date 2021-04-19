#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::cout; using std::cin;

int main() 

{
	int a = 0;
	int b = 0;
	int c = 0;
	string choice;
	tic_tac_toe game1;
	tic_tac_toe_manager manager;
		
	string continue_ = "y";
	while (continue_ == "y")
	{
		cout<<"Which player do you want X or O? \n";
		cin>>choice;
		game1.start_game(choice);
	
		
	
		while(game1.game_over() == false)
		{
			
			cin>>game1;
			cout<<game1;
		}
		manager.save_game(game1);
		cout<<"The winner is "<<game1.get_winner();

		cout<<"\n Do you want to continue the game(y/n)?: \n";
		cin>>continue_;

	}
	manager.get_winner_total(a,b,c);
	cout<<"X wins: "<<b<<"\n"<<"O wins: "<<a<<"\n"<<"Ties: "<<c;
	
	return 0;
}