//
// Created by uly49 on 3/7/2022.
//
//Rational.cpp

#include"Rational.h"
#include <sstream>
Rational::Rational(int n,int d) {
    if(d <= 0)
        d=1;
    num = n;
    deno = d;
    //If the denominator is equal to or less than 0, code will change denominator to 1
}
Rational::~Rational(){

}

Rational Rational::operator * (Rational r){
    int n ,d;
    n= num*r.num;
    d=deno*r.deno;
    return *(new Rational(n,d));
}
Rational Rational::operator + (Rational r){
    int n ,d;
    n=(num*r.deno)+(r.num*deno);
    d=deno*r.deno;
    return *(new Rational(n,d));
}
Rational Rational::operator - (Rational r){
    int n ,d;
    n=(num*r.deno)-(r.num*deno);
    d=deno*r.deno;
    return *(new Rational(n,d));
}
Rational Rational::operator / (Rational r){
    int n ,d;
    n= num*r.deno;
    d=deno*r.num;
    return *(new Rational(n,d));
}

bool Rational::operator == (Rational r){
    return num *r.deno == r.num *deno;
}
bool Rational::operator !=(Rational r){
    return num *r.deno != r.num *deno;
}
string Rational::toString(){
    ostringstream str;
    str<<num<<'/'<<deno;
    return str.str();
}
