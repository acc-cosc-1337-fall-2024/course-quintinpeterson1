#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include <tic_tac_toe_manager.h>


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full")
{
	TicTacToe game;

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test X wins")
{
    TicTacToe game;

    // X, O alternate for all

    game.mark_board(1); 
    game.mark_board(4); 
    game.mark_board(2); 
    game.mark_board(5); 
    game.mark_board(3); 

    
    REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test O wins")
{
    TicTacToe game;

    game.mark_board(1); 
    game.mark_board(2); 
    game.mark_board(4); 
    game.mark_board(5); 
    game.mark_board(7); 
    game.mark_board(6); 

    
    REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test if it's a tie")
{
    TicTacToe game;

    

    
    REQUIRE(game.get_player() == ""); 
}

TEST_CASE("Test get_winner_total")
{
    TicTacToeManager manager;

    TicTacToe game1;
    game1.mark_board(1); 
    game1.mark_board(4); 
    game1.mark_board(2); 
    game1.mark_board(5); 
    game1.mark_board(3); 

    TicTacToe game2;
    game2.mark_board(1); 
    game2.mark_board(2); 
    game2.mark_board(4); 
    game2.mark_board(5); 
    game2.mark_board(7); 
    game2.mark_board(6); 

    TicTacToe game3;
    

    manager.save_game(game1);
    manager.save_game(game2);
    manager.save_game(game3);

    int x_win, o_win, ties;
    manager.get_winner_total(o_win, x_win, ties);

    REQUIRE(x_win == 1);
    REQUIRE(o_win == 1);
    REQUIRE(ties == 1);
}