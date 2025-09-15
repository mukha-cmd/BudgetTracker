cmake_minimum_required(VERSION 4.0)
project(BudgetTracker)

set(CMAKE_CXX_STANDARD 20)

add_executable(BudgetTracker main.cpp
        src/main.cpp
        src/Balance.cpp
        include/Balance.h
        src/Expenses.cpp
        include/Expenses.h
        src/Tracker.cpp
        include/Tracker.h)
