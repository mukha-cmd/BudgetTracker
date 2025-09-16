#ifndef BUDGETTRACKER_EXPENSES_H
#define BUDGETTRACKER_EXPENSES_H

#include <string>
#include <iostream>

struct Expense {
    std::string type;
    std::string date;
    std::string description;
    double cost{};

    Expense(const std::string &t, const std::string &d, const std::string &desc, double c);

    void print() const;
};

#endif //BUDGETTRACKER_EXPENSES_H
