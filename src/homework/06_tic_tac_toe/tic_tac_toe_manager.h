//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <vector>
#include <memory>

class TicTacToeManager
{
public:
    // add tictactoe to games vector
    void save_game(std::unique_ptr<TicTacToe> b);
    // reference to get winners
    void get_winner_total(int& x, int& o, int& t);
private:
    std::vector<std::unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    // get final winners
    void update_winner_count(std::string winner);
};

#endif