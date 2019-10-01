// Copyright (c) 2019 Christina Ngwa All rights reserved .
//
// Created by: Christina Ngwa
// Created on: September 2019
// This is program calculates  the area of a kite
//  with user input

#include <iostream>

int main() {
    // this function calculates circumference of a circle
    int length;
    int width;

    // input
    std::cout << "Dr.Bob wants to know the area of your"
                 " kite for scientific research." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter length of the kite (cm): ";
    std::cin >> length;
    std::cout << "Enter width of the kite (cm): ";
    std::cin >> width;

    // process
    int area = length*width/2;

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " cm^2" << std::endl;
}
