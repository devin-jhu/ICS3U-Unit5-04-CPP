// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The volume calculator

#include <iostream>
#include <string>
#include <cmath>


float area(float radiusNumber, float heightNumber) {
    // this function calculates area of a triangle
    float volumeNumber;

    volumeNumber = (M_PI * pow(radiusNumber, 2) * heightNumber);

    std::cout << "the volume of your cylinder is " << volumeNumber << " cm²";
}

int main() {
    // this function get base and height then calls the function
    std::string radiusString;
    std::string heightString;
    float radius;
    float height;

    // input
    std::cout << "enter height (cm): ";
    std::cin >> heightString;
    std::cout << "enter base (cm): ";
    std::cin >> radiusString;

    // process & output
    try {
        radius = std::stoi(radiusString);
        height = std::stoi(heightString);

        area(radius, height);
    } catch (std::invalid_argument) {
    std::cout << "not a number" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
