//h
#include<vector>
#include<string>
using std::vector;
using std::string;
class tic_tac_toe
{
public:
    void display_board()const ;
    void mark_board(int position);
    void start_game(string first_player);
    void get_player();
    bool game_over();

private:
    //vector<string>pegs;
    vector<string> pegs = {" "," "," "," "," "," "," "," "," ",};
    string player;
    void clear_board();
    bool check_board_full();
    void set_next_player();


};