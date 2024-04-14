//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_player());
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    // reference to get winners
    x = x_win;
    o = o_win;
    t = ties;

}


    void TicTacToeManager::update_winner_count(std::string winner)
{
    // if winner X increment x_win, if winner O increment o_win, and else increment ties
    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}
