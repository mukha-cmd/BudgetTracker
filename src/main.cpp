#include <iostream>
#include "../include/Balance.h"
#include "../include/Expenses.h"
#include <vector>

int main() {
    Balance myBalance;
    myBalance.balance = 5.0;

    double monthlyBills = 75.0;
    myBalance.add(200.0); // initial monthly deposit

    std::vector<Expense> expenses;

    while (true) {
        std::cout << "\n=== Budget Tracker Menu ===\n";
        std::cout << "1. Show balance & breakdown\n";
        std::cout << "2. Add expense\n";
        std::cout << "3. Add money\n";
        std::cout << "4. Quit\n";
        std::cout << "Choose: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            double remainder = myBalance.balance - monthlyBills;
            std::cout << "New balance: $" << myBalance.balance << "\n";
            std::cout << "Money to save: $" << 0.6 * remainder << "\n";
            std::cout << "Buffer money: $" << 0.3 * remainder << "\n";
            std::cout << "Money for fun: $" << 0.1 * remainder << "\n";
        }
        else if (choice == 2) {
            std::string type, date, desc;
            double cost;

            std::cout << "Enter expense type: ";
            std::cin >> type;
            std::cout << "Enter date (YYYY-MM-DD): ";
            std::cin >> date;
            std::cout << "Enter description: ";
            std::cin.ignore();
            std::getline(std::cin, desc);
            std::cout << "Enter cost: ";
            std::cin >> cost;

            Expense e(type, date, desc, cost);
            expenses.push_back(e);
            e.print();
            myBalance.subtract(cost);
        }
        else if (choice == 3) {
            double amount;
            std::cout << "Enter amount to add: ";
            std::cin >> amount;
            myBalance.add(amount);
        }
        else if (choice == 4) {
            break;
        }
        else {
            std::cout << "Invalid choice.\n";
        }
    }
}
