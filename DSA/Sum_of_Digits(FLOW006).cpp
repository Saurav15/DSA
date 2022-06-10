#include<iostream>

int sumOfDigits() {
	int T;
	std::cout << "Enter number of TC:" << std::endl;
	std::cin >> T;

	while (T > 0) {
		int number;
		std::cout << "Enter number :" << std::endl;
		std::cin >> number;

		int sum = 0;
		
		while (number > 0) {
			int lastNum = number % 10;
			sum = sum + lastNum;
			number = number / 10;
			std::cout << "Number" << number << std::endl;
		}
		std::cout << "Sum" << sum << std::endl;

		T--;
	}
	return 0;
}