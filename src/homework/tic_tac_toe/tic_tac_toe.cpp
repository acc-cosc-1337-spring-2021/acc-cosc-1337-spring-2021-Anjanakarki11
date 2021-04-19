//cpp
#include "tic_tac_toe.h"
#include<iostream>
using std::cout;
using namespace std;


//void tic_tac_toe::display_board()const 

//{
   //for(int i = 0; i<=8;i++)
   //{
       //cout<<pegs[i];
       //if ((i+1) % 3 == 0)
       //{
           //cout<<"\n";
       //}
   //}
//}


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
        clear_board();
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
    
    if (check_row_win() || check_column_win() || check_diagonal_win())
    {
         set_winner();
         return true;


    }
    else if (check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

bool tic_tac_toe::check_row_win()
{
    bool win = false;
    
    
        if ((pegs[0] == pegs[1] && pegs[0] == pegs[2]  && pegs[0] != " " )
        || (pegs[3] == pegs[4] && pegs[3] == pegs[5]  && pegs[3] != " ")
        || (pegs[6] == pegs[7] && pegs[6] == pegs[8]  && pegs[6] != " "))
        {
            win = true;
        }
    return win;

}

bool tic_tac_toe::check_column_win()
{
    bool win = false;
    
    
        if ((pegs[0] == pegs[3] && pegs[0] == pegs[6] && pegs[0] != " ")
        || (pegs[1] == pegs[4] && pegs[1] == pegs[7] && pegs[1] != " ")
        || (pegs[2] == pegs[5] && pegs[2] == pegs[8] && pegs[2] != " "))
        {
            win = true;
        }
    return win;

}
bool tic_tac_toe::check_diagonal_win()
{
    bool win = false;
    
    
        if ((pegs[0] == pegs[4] && pegs[0] == pegs[8]  && pegs[4] != " ") 
        || (pegs[2] == pegs[4] && pegs[2] == pegs[6]  && pegs[4] != " "))
       
        {
            win = true;
        }

   return win; 

}
void tic_tac_toe::set_winner()
{
    if (player == "X")
    {
        winner = "O";

    }
    else
    {
        winner = "X";
    }
}
std::ostream& operator<<(std::ostream& out, const tic_tac_toe& game1)
{
    for(int i = 0; i<=8;i++)
   {
       out<<game1.pegs[i];
       if ((i+1) % 3 == 0)
       {
           out<<"\n";
       }
   }
    return out;

}
std::istream& operator>>(std::istream& in, tic_tac_toe& game1)
{
    int position_chosen;
    cout<<"Which position do you want to choose? \n";
	in>>position_chosen;
			
	game1.mark_board(position_chosen);
    
    return in;
}

