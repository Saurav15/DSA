#include<iostream>
#define Log(x) std::cout << x << std::endl;

int EnormusInputTest() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	int divisibleNumber;
	Log("Enter number that needs to be divided:");
	std::cin >> divisibleNumber;

	int count = 0;

	while (T > 0)
	{
		int number;
		Log("Enter Number : ");
		std::cin >> number;

		if (number % divisibleNumber == 0) {
			count++;
		}
		T--;
	}

	return count;
}