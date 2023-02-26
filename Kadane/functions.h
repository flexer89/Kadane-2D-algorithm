#pragma once
#include <iostream>

int** createArray2D(int row, int col);
void fillTab(int** T, int row, int col);
void deleteTab(int** T, int row);
int* colSum(int** T, int startRow, int row, int col);
int kadaneAlgorithm1D(int t[], int col);
int maxSum(int** T, int row, int col);
bool range(int row, int col);