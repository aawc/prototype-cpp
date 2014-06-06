#ifndef FindElementsWithSumInArray_H
#define FindElementsWithSumInArray_H

#include <array>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

const int NUMBER_OF_ITEMS = 15;

int getRandomInt(int limit = INT_MAX);
void displayArray(
    array<int, NUMBER_OF_ITEMS> numbers,
    string label = "displayArray");

#endif // FindElementsWithSumInArray_H
