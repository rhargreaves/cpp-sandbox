#include "cell.hpp"

void Cell::setState(State newState) {
	state = newState;
}

Cell::State Cell::getState() const {
    return state;
}
