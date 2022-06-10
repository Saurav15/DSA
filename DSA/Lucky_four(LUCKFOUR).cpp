#include<iostream>
#define Log(x) std::cout << x << std::endl;

int luckyFour() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		int number;
		Log("Enter Number:");
		std::cin >> number;

		int count = 0;
		while (number > 0)
		{
			int digit = number % 10;
			if (digit == 4) {
				count++;
			}
			number = number / 10;
		}
		std::cout << count << std::endl;
		T--;
	}
	return 0;
}