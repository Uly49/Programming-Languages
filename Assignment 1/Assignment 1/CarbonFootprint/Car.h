//
// Created by uly49 on 3/7/2022.
//

#ifndef ASSIGNMENT_1_CAR_H
#define ASSIGNMENT_1_CAR_H
#include "CarbonFootprint.h"
class Car : public CarbonFootprint {
public:
    Car (int gallons);
    void getCarbonFootprint();
private:
    int gallons;
};
#endif //ASSIGNMENT_1_CAR_H
