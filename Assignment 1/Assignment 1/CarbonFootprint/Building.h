//
// Created by uly49 on 3/7/2022.
//

#ifndef ASSIGNMENT_1_BUILDING_H
#define ASSIGNMENT_1_BUILDING_H
#include "CarbonFootprint.h"

class Building:public CarbonFootprint {
public:
    Building(int sqft);

    void getCarbonFootprint();

    int getSqft();

private:
    int sqft;
};
#endif //ASSIGNMENT_1_BUILDING_H
