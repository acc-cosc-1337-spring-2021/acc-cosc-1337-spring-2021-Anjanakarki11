//cpp
#include "tic_tac_toe.h"
#include<iostream>
using std::cout;
using namespace std;


void tic_tac_toe::display_board()const 

{
   for(int i = 0; i<=8;i++)
   {
       cout<<pegs[i];
       if ((i+1) % 3 == 0)
       {
           cout<<"\n";
       }
   }
}


void tic_tac_toe::mark_board(int position)
{
    pegs[position -1] = player;
    set_next_player();
}

void tic_tac_toe::set_next_player()
{
    if (player == "X")
    {
        player = "O";

    }
    else
    {
        player = "X";
    }
}
bool tic_tac_toe::check_board_full()

{
    bool open_spaces = false;
    for(int i = 0; i<=8;i++)
   {
       //cout<<pegs[i];
       if (pegs[i] == " ")
       {
           open_spaces = true;
       }
       
   }
    return !(open_spaces);
}
void tic_tac_toe::start_game(string first_player)
{
    if (first_player == "X" || first_player == "O")
    {
        player = first_player;
    }
}
void tic_tac_toe::clear_board()
{
    
    for(int i = 0; i<=8;i++)
   {

       pegs[i]= " ";
   }

}
bool tic_tac_toe::game_over()
{
    return check_board_full();
}