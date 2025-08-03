add_executable(unit_tests
    test_board.cpp
    test_cell.cpp
)

target_link_libraries(unit_tests
    PRIVATE
    noughts_and_crosses_lib
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(unit_tests)
