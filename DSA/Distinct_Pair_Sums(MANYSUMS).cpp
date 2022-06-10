#include<iostream>
#define Log(x) std::cout << x << std::endl;

int distinctPairSum() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		int firstInt, lastInt;
		Log("Entr first and last int: ");
		std::cin >> firstInt >> lastInt;

		std::cout << ((2 * lastInt) - (2 * firstInt) ) + 1<< std::endl;
		T--;
	}
	return 0;
}