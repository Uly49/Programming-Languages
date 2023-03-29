//
// Created by uly49 on 3/7/2022.
//

#include <iostream>
using namespace std;
#include "Car.h"

Car::Car(int gallons) {
    this->gallons=gallons;
}

void Car::getCarbonFootprint() {
    cout << "Car that has used " << gallons << " gallons of gas: " << gallons*(20) << "." << endl;
}