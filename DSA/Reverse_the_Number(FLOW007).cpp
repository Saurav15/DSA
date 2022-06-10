#include<iostream>
#include <math.h>

int reverseNumber() {
	int T;
	std::cout << "Enter number of TC:" << std::endl;
	std::cin >> T;

	while (T > 0) {
		int number;
		std::cout << "Enter number :" << std::endl;
		std::cin >> number;

		//As we count from 0 soo first digit will be counted as -1+1 = 0.
		int totalDigits = -1;
		int numberCopy = number;
		while (numberCopy > 0)
		{
			totalDigits++;
			numberCopy = numberCopy / 10;
		}
		

		int reversedNumber = 0;
		while (number > 0) {
			int digit = number % 10;
			int digitTens = digit * pow(10, totalDigits);
			reversedNumber = reversedNumber + digitTens;
			totalDigits = totalDigits - 1;
			number = number / 10;
			std::cout << reversedNumber << std::endl;
		}
		std::cout << reversedNumber << std::endl;
		T--;
	}
	return 0;
}