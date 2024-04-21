// main.cpp

#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
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
    size_t game_size;
    std::unique_ptr<TicTacToe> game;

    do
    {
        cout<<"Enter first player: ";
        cin>>first_player;
        
        cout<<"Enter the game size: ";
        cin >> game_size;
        
        switch (game_size) {
            case 3:
                game = std::make_unique<TicTacToe3>();
                break;
            case 4:
                game = std::make_unique<TicTacToe4>();
                break;
            default:
                cout << "Error: game size must be 3 or 4!\n";
                continue;
        }
        
        if (game_size == 3) {
        } else if(game_size == 4) {}

        game->start_game(first_player);

        int position;

        while(!game->game_over())
        {
            cout<<"Enter a position: ";
            cin>>position;
            game->mark_board(position);
            game->display_board();
        }

        manager.save_game(std::move(game));

        // display TicTacToeManager
        manager.get_winner_total(o_win, x_win, ties);
        cout << "X Wins: " << x_win << ", O Wins: " << o_win << ", Ties: " << ties << "\n";

        cout<<"Play again, enter y or Y? ";
        cin>>user_choice;

    } while(user_choice == 'y' || user_choice == 'Y'); 
    
    return 0;
}