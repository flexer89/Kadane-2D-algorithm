#include <iostream>
#include "functions.h"

int main()
{
	int caseAmount = 0;
	int row;
	int col;
	std::cout << "Amount of cases: ";
	std::cin >> caseAmount;
	std::cout << std::endl;
	while (caseAmount > 0)
	{
		std::cout << "Type row amount: ";
		std::cin >> row;

		std::cout << "Type column amount: ";
		std::cin >> col;
		std::cout << std::endl;
		if (range(row, col) == 1)
		{
			int** Tab = createArray2D(row, col);
			fillTab(Tab, row, col);
			std::cout << "Maximum Sum: " << maxSum(Tab, row, col) << std::endl;
			deleteTab(Tab, row);
			caseAmount--;
		}
	}
	return 0;
}
