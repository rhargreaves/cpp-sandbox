#pragma once

class Cell {
    public:
        enum class State { EMPTY, X, O };

        void setState(State newState);
        State getState() const;

    private:
        State state = State::EMPTY;
};
