//
// Created by Lenovo on 15.09.2025.
//

#ifndef BUDGETTRACKER_BALANCE_H
#define BUDGETTRACKER_BALANCE_H

using namespace std;

struct Balance {
    double balance = 0.0;
    void add(double value);
    void subtract(double value);
};


#endif //BUDGETTRACKER_BALANCE_H