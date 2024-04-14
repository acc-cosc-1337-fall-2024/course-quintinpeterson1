// main.cpp

#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cout; 
using std::cin; 
using std::string;

int main() 
{
    TicTacToeManager manager;
    string first_player;
    char user_choice = 'y';
    int x_win, o_win, ties;

    do
    {
        cout<<"Enter first player: ";
        cin>>first_player;

        TicTacToe game;
        game.start_game(first_player);

        int position;

        while(!game.game_over())
        {
            cout<<"Enter a position: ";
            cin>>position;
            game.mark_board(position);
            game.display_board();
        }

        manager.save_game(game);

        // display TicTacToeManager
        manager.get_winner_total(o_win, x_win, ties);
        cout << "X Wins: " << x_win << ", O Wins: " << o_win << ", Ties: " << ties << "\n";

        cout<<"Play again, enter y or Y? ";
        cin>>user_choice;

    } while(user_choice == 'y' || user_choice == 'Y'); 
    
    return 0;
}