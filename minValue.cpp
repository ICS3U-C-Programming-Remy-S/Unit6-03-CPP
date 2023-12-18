// Copyright (c) 2023 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Dec 17, 2023
// This program will calculate the min of
// 10 nums

#include <array>
#include <ctime>
#include <iostream>
#include <random>

int findMinValue(int arrayOfInt[]) {
    // consts
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // Initialize counter
    int counter = 1;

    // Initialize min_value to cell 0 in the array
    int min_value = arrayOfInt[0];

    // Loop through the array to find the min value
    while (counter < MAX_ARRAY_SIZE) {
        // find min
        if (arrayOfInt[counter] < min_value) {
            min_value = arrayOfInt[counter];
        }

        // increment
        counter += 1;
    }

    return min_value;
}

int main() {
    // create a random seed value
    std::random_device rd;
    // create the sequence for number generator
    std::mt19937 gen(rd());

    // Constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 1;
    const int MAX_NUM = 100;

    // create array and random num
    int arrayOfInt[MAX_ARRAY_SIZE], randomNum, min_value;

    // Create a distribution between 1 and 100
    std::uniform_int_distribution<int> distribution(MIN_NUM, MAX_NUM);

    // Generate random numbers and fill the array
    for (int counter1 = 0; counter1 < MAX_ARRAY_SIZE; counter1++) {
        // generate random num
        randomNum = distribution(gen);
        // set array to randomNum
        arrayOfInt[counter1] = randomNum;

        // display array
        std::cout << arrayOfInt[counter1] << " added to array" << std::endl;
    }

    // call findMinValue function
    min_value = findMinValue(arrayOfInt);

    // display min value
    std::cout << "\nMin Value is: " << min_value << std::endl;
}
