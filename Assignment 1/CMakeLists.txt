cmake_minimum_required(VERSION 3.21)
project(Assignment_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(Banking)
include_directories(CarbonFootprint)
include_directories(Fractions)

add_executable(Assignment_1
        "Banking/Account Inheritance main.cpp"
        Banking/Account.cpp
        Banking/Account.h
        Banking/CheckingAccount.cpp
        Banking/CheckingAccount.h
        Banking/SavingsAccount.cpp
        Banking/SavingsAccount.h
        CarbonFootprint/Bicycle.cpp
        CarbonFootprint/Bicycle.h
        CarbonFootprint/Building.cpp
        CarbonFootprint/Building.h
        CarbonFootprint/Car.cpp
        CarbonFootprint/Car.h
        "CarbonFootprint/CarbonFootprint main.cpp"
        CarbonFootprint/CarbonFootprint.h
        "Fractions/Rational main.cpp"
        Fractions/Rational.cpp
        Fractions/Rational.h)
add_executable(Banking
        "Banking/Account Inheritance main.cpp"
        "Banking/Account.cpp"
        "Banking/Account.h"
        "Banking/CheckingAccount.cpp"
        "Banking/CheckingAccount.h"
        "Banking/SavingsAccount.cpp"
        "Banking/SavingsAccount.h"
        )
add_executable(CarbonFootprint
        "CarbonFootprint/Bicycle.cpp"
        "CarbonFootprint/Bicycle.h"
        "CarbonFootprint/Building.cpp"
        "CarbonFootprint/Building.h"
        "CarbonFootprint/Car.cpp"
        "CarbonFootprint/Car.h"
        "CarbonFootprint/CarbonFootprint main.cpp"
        "CarbonFootprint/CarbonFootprint.h"
        )
add_executable(Fractions
        "Fractions/Rational main.cpp"
        "Fractions/Rational.cpp"
        "Fractions/Rational.h"
        )
