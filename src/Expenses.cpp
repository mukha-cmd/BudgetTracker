#include "Expenses.h"

Expense::Expense(const std::string& t, const std::string& d,
                 const std::string& desc, double c)
    : type(t), date(d), description(desc), cost(c) {}

void Expense::print() const {
    std::cout << "[" << date << "] " << description
              << " (" << type << ") - $" << cost << "\n";
}
