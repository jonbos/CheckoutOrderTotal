cmake_minimum_required(VERSION 3.8)

set(This OrderTotalKataTests)

set(Sources
    ItemTests.cpp
    TransactionTests.cpp
    MarkdownTests.cpp
    BuyXGetZSpecialTests.cpp)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    OrderTotalKata
)

add_test(
    NAME ${This}
    COMMAND ${This}
)