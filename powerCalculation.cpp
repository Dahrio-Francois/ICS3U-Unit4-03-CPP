// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew-Ten-Den
// Created on: April 2022
// This program shows the square of consecutive integers

#include <math.h>
#include <iostream>

int main() {
    // this function shows the square of consecutive integers
    std::string positiveIntegerAsString;
    int positiveInteger;
    int positiveFloat;
    int loopCounter = 0;
    int answer = 0;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> positiveIntegerAsString;

    // process
    try {
        positiveInteger = std::stoi(positiveIntegerAsString);
        positiveFloat = std::stof(positiveIntegerAsString);
        if (positiveInteger >= 0) {
            for (int loopCounter = 0; loopCounter
            <= positiveInteger; loopCounter++) {
                answer = pow(loopCounter , 2);
                std::cout << loopCounter << "² = " << answer << std::endl;
            }
        } else {
            std::cout << "\nPlease enter a positive integer" << std::endl;
        }
    } catch (std::invalid_argument) {
            std::cout << "\nThat is not an integer" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
