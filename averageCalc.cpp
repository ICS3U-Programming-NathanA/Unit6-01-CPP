// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: December 14 2022
// This program uses a random number generator
// it then calculates the average of 10 random generated numbers

#include <math.h>
#include <iostream>
#include <random>
using std::string;

// Declaring constants
int MAX = 10;
int MIN = 0;
int MAX_NUM = 100;

// Defining the main function
int main() {
    // Defining the variables
    int arrayOfInt[MAX];
    int sum = 0;
    float average = 0;
    int randomNum;

    // For statement to loop back if the counter is between 0 and 9
    for (int counter = 0; counter < 10; counter++) {
        // random number generator
        std::random_device rseed;
        std::mt19937 rgen(rseed());                        // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 100);  // [0,100]
        randomNum = idist(rgen);
        arrayOfInt[counter] = randomNum;
        // display added to index
        std::cout << randomNum << " added to array at index ";
        std::cout << counter << "\n";
    }

    // Second for loop for calculating the sum
    for (int counter2 = 0; counter2 < 10; counter2++) {
        sum += arrayOfInt[counter2];
    }

    // Calculating average
    average = sum / 10;

    // Displaying average
    std::cout << "\nThe average is " << average;
}
