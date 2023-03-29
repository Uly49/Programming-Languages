//
// Created by uly49 on 3/7/2022.
//

#ifndef ASSIGNMENT_1_CHECKINGACCOUNT_H
#define ASSIGNMENT_1_CHECKINGACCOUNT_H
#include "Account.h" // Account class definition

class CheckingAccount : public Account {
public:
    // constructor initializes balance and transaction fee
    CheckingAccount( double, double );
    void credit( double ); // redefined credit function
    bool debit( double ); // redefined debit function
private:
    double transactionFee; // fee charged per transaction

    // utility function to charge fee
    void chargeFee();
}; // end class CheckingAccount

#endif //ASSIGNMENT_1_CHECKINGACCOUNT_H
