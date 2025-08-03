#include "board.hpp"

std::span<Cell> Board::getBoard() {
	// Assuming the board is a 3x3 grid, we can return a span of the cells.
	static Cell board[9]; // Static to ensure the array persists
	return std::span<Cell>(board, 9);
}


