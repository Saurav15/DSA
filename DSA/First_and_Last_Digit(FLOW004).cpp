#include<iostream>
#define Log(x) std::cout << x << std::endl;

int firstAndLastDigit() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		int number;
		Log("Enter number: ");
		std::cin >> number;

		int firstDigit;
		int lastDigit = number % 10;

		while (number > 0)
		{
			firstDigit = number % 10;
			number = number / 10;
		}

		std::cout << firstDigit + lastDigit << std::endl;

		T--;
	}
	return 0;
}