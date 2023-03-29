//
// Created by uly49 on 3/7/2022.
//

#ifndef ACCOUNT_INHERITANCE_MAIN_CPP_RATIONAL_H
#define ACCOUNT_INHERITANCE_MAIN_CPP_RATIONAL_H

#endif //ACCOUNT_INHERITANCE_MAIN_CPP_RATIONAL_H
#include<iostream>
using namespace std;

class Rational {
public:
    Rational(int ,int);
    ~Rational();
    Rational operator * (Rational);
    Rational operator + (Rational);
    Rational operator - (Rational);
    Rational operator / (Rational);

    bool operator == (Rational);
    bool operator !=(Rational);
    string toString();

private:
    int num;
    int deno;

};