#include <gtest/gtest.h>
#include "../include/board.hpp"
#include "../include/cell.hpp"

TEST(BoardTest, BoardReturnsSpan) {
    Board board;
    auto span = board.getBoard();
    // Just check type and size for now
    EXPECT_GE(span.size(), 0);
}
