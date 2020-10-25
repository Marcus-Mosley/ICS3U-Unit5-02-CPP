// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on October 2020
// This program calculates the area of a triangle

#include <iostream>

void area(int base_int, int height_int) {
    // This functions calculates area
    float area;

    // process
    area = (base_int * height_int) / 2.0;

    // output
    std::cout << "The area of the triangle is " << area << "cm^2" << std::endl;
}


main() {
    // This function gets base length and height
    std::string base_str;
    std::string height_str;
    float base_int;
    float height_int;

    // Input
    while (true) {
        std::cout << "Enter the base length of the triangle (cm): ";
        std::cin >> base_str;

        try {
            base_int = std::stoi(base_str);
            if (base_int <= 0) {
                std::cout << "You have not a valid base length, please input a"
                    " positive number!" << std::endl;
                std::cout << "" << std::endl;
            } else {
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "That is not an integer, please input a number!"
            << std::endl;
            std::cout << "" << std::endl;
        }
    }
    while (true) {
        std::cout << "Enter the height of the triangle (cm): ";
        std::cin >> height_str;

        try {
            height_int = std::stoi(height_str);
            if (height_int <= 0) {
                std::cout << "You have not a valid height, please input a"
                    " positive number!" << std::endl;
                std::cout << "" << std::endl;
            } else {
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "That is not an integer, please input a number!"
            << std::endl;
            std::cout << "" << std::endl;
        }
    }
    std::cout << "" << std::endl;

    // Call Functions
    area(base_int, height_int);
}
