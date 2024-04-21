#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test win by first column 3", "[TicTacToe3]") {
    TicTacToe3 game;
    game.start_game("X");

    
    game.mark_board(1);
    game.mark_board(4);
    game.mark_board(7);

    REQUIRE(game.game_over() == false);
}

TEST_CASE("Test win by first column 4", "[TicTacToe4]") {
    TicTacToe4 game;
    game.start_game("X");

   
    game.mark_board(1);
    game.mark_board(5);
    game.mark_board(9);
    game.mark_board(13);

    REQUIRE(game.game_over() == false);
}