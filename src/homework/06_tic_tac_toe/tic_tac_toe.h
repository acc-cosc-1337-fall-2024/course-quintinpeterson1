//h
#include<iostream>
#include<string>
#include<vector>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(size_t size);
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    void display_board() const;
    virtual ~TicTacToe() {}
protected:
private:
    std::string player;
    size_t size;
    std::vector<std::string> pegs;
    void clear_board();
    void set_next_player();
    bool check_single_column(size_t col) const;
    bool check_column_win() const;
    bool check_single_row(size_t row) const;
    bool check_row_win() const;
    bool check_ld_diagonal() const;
    bool check_rd_diagonal() const;
    bool check_board_full() const;
};

#endif