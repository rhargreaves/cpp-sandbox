#include <iostream>
#include "board.hpp"

int main() {
    Board board;
    auto cells = board.getBoard();
    for (const auto& cell : cells) {
        char state_char;
        switch (cell.getState())
        {
        case Cell::State::EMPTY:
            state_char = ' ';
            break;
        case Cell::State::X:
            state_char = 'X';
            break;
        case Cell::State::O:
            state_char = 'O';
            break;
        default:
            state_char = '?';
            break;
        }
        std::cout << state_char << " ";
    }
    std::cout << std::endl;

    return 0;
}
