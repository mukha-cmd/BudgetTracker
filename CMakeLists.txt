cmake_minimum_required(VERSION 4.0)

project(BudgetTracker VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the include directory for your headers
include_directories(include)

# Define the executable with only .cpp files
add_executable(BudgetTracker
        src/main.cpp
        src/Balance.cpp
        src/Expenses.cpp
        src/Tracker.cpp
)
