//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"
using std::vector;
using std::string;
class tic_tac_toe_manager
{
public:
    void save_game(tic_tac_toe b);
    //void update_winner_count(std::string winner);
    friend std::ostream& operator<<(std::ostream& out, const tic_tac_toe_manager& manager);
    void get_winner_total(int& o, int& x, int& t);

private:
    
    std::vector<tic_tac_toe> games{};
     int x_win{0};
     int o_win{0};
     int ties{0};
    void update_winner_count(std::string winner);

};
#endif