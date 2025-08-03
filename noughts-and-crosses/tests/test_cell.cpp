#include <gtest/gtest.h>
#include "../include/cell.hpp"

TEST(CellTest, DefaultStateIsEmpty) {
    Cell cell;
    EXPECT_EQ(cell.getState(), Cell::State::EMPTY);
}

TEST(CellTest, SetStateWorks) {
    Cell cell;
    cell.setState(Cell::State::X);
    EXPECT_EQ(cell.getState(), Cell::State::X);
    cell.setState(Cell::State::O);
    EXPECT_EQ(cell.getState(), Cell::State::O);
}
