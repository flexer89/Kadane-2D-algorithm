#include "functions.h"

int** createArray2D(int row, int col)
{
	int** tab = nullptr;
	try
	{
		tab = new int* [row];
	}
	catch (const std::bad_alloc&)
	{
		std::cerr << "error";
	}

	for (int i = 0; i < row; i++)
	{
		try
		{
			tab[i] = new int[col];
		}
		catch (const std::bad_alloc&)
		{
			std::cerr << "error";
		}
	}
	return tab;

}

void fillTab(int** T, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << "Type [" << i << "][" << j << "] element: ";
			std::cin >> T[i][j];
		}
		std::cout << std::endl;
	}
}

void deleteTab(int** T, int row)
{
	for (int j = 0; j < row; j++)
	{
		delete[] T[j];
	}
	delete[] T;
}

int* colSum(int** T, int startRow, int row, int col)
{
	int* tempTab = new int[col] {0};
	for (int j = 0; j < col; j++)
	{
		int temp = startRow;
		for (startRow; startRow < row; startRow++)
		{
			tempTab[j] += T[startRow][j];
		}
		startRow = temp;
	}
	return tempTab;
}

int kadaneAlgorithm1D(int t[], int col)
{
	int maxCurrent = t[0];
	int maxSum = t[0];
	for (int i = 1; i < col; i++)
	{
		maxCurrent = std::max(t[i], t[i] + maxCurrent);
		maxSum = std::max(maxCurrent, maxSum);
	}
	return maxSum;
}

int maxSum(int** T, int row, int col)
{
	int Sum = 0;
	for (int i = 0; i < row; i++)
	{
		int* tempTab = colSum(T, i, row, col);
		int tempSum = kadaneAlgorithm1D(colSum(T, i, row, col), col);
		Sum = std::max(tempSum, Sum);
		delete[] tempTab;

	}
	return Sum;
}

bool range(int row, int col)
{
	if (row >= 1 && row <= 100 && col >= 1 && col <= 100)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
