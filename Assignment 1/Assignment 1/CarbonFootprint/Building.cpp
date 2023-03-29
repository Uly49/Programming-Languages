//
// Created by uly49 on 3/7/2022.
//

#include <iostream>
using namespace std;
#include "Building.h"

Building::Building(int sqft) {
    this -> sqft = sqft;
}

void Building::getCarbonFootprint() {
    cout << "Building with " << sqft << " square feet:" << sqft * (134) << "." << endl;
}