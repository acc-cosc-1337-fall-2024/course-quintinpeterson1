//cpp
#include <stdexcept>
#include "tic_tac_toe.h"


using std::cout;

// creating a 0x0 board _should_ be a compilation error, but that requires
// templates.

TicTacToe::TicTacToe(size_t size) : size(size), pegs({size * size, " "}) {}

bool TicTacToe::game_over()
{
    return check_board_full()  ||
           check_column_win()  ||
           check_row_win()     ||
           check_ld_diagonal() ||
           check_rd_diagonal();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for(size_t i = 0; i < size; i++)
    {
        for(size_t j = 0; j < size; j++) {
            cout << pegs[size*i + j];
            if (j < size-1) {
                cout << "|";
            }
        }
        cout << "\n";
    }
}



//private functions
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_single_column(size_t col) const {
    if(pegs[col] == " ") {
        return false;
    }
    for(int i = 1; i < size; i++) {
        if(pegs[col] != pegs[i * size + col]) {
            return false;
        }
    }
    return true;
}

bool TicTacToe::check_column_win() const {
    for(int i = 0; i < size; i++) {
        if (check_single_column(i)) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_single_row(size_t row) const {
    if (pegs[size * row] == " ") {
        return false;
    }
    for(int i = 1; i < size; i++) {
        if(pegs[size * row] != pegs[size*row + i]) {
            return false;
        }
    }
    return true;
}

bool TicTacToe::check_row_win() const {
    for(int i = 0; i < size; i++) {
        if(check_single_row(i)) {
            return true;
        }
    }
    return false;
}


bool TicTacToe::check_ld_diagonal() const {
    if (pegs[0] == " ") {
        return false;
    }
    for(int i = 1; i < size; i++) {
        if(pegs[0] != pegs[size*i + i]) {
            return false;
        }
    }
    return true;
}

bool TicTacToe::check_rd_diagonal() const {
    if (pegs[size-1] == " ") {
        return false;
    }
    for(int i = 1; i < size; i++) {
        if(pegs[size-1] != pegs[size*(i+1) - i - 1]) {
            return false;
        }
    }
    return true;
}

bool TicTacToe::check_board_full() const
{
    for(long unsigned int i=0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}