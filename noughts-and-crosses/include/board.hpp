
#pragma once
#include <span>
#include "cell.hpp"

class Board {

	public:
		std::span<Cell> getBoard();

};