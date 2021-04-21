//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
using std::cout;
using namespace std;

void tic_tac_toe_manager::save_game(tic_tac_toe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}
std::ostream& operator<<(std::ostream& out, const tic_tac_toe_manager& manager)
{
    //int i;
    for( size_t i = 0; i<= manager.games.size(); ++i)
    {
        cout<<manager.games[i]<<"\n";
    }
    return out;

}
void tic_tac_toe_manager::get_winner_total(int& o, int& x, int& t)
{
    x = x_win;
    o = o_win;
    t = ties;

}
void tic_tac_toe_manager::update_winner_count(std::string winner)
{
    if (winner == "X")
    {
        x_win += 1;
    }
    else if (winner == "O")
    {
        o_win += 1;
    }
    else
    {
        ties += 1;
    }
}