//
// Created by uly49 on 3/7/2022.
//

#ifndef ASSIGNMENT_1_SAVINGSACCOUNT_H
#define ASSIGNMENT_1_SAVINGSACCOUNT_H
#include "Account.h" // Account class definition

class SavingsAccount : public Account {
public:
    // constructor initializes balance and interest rate
    SavingsAccount( double, double );

    double calculateInterest(); // determine interest owed
private:
    double interestRate; // interest rate (percentage) earned by account
}; // end class SavingsAccount
#endif //ASSIGNMENT_1_SAVINGSACCOUNT_H
