#include<iostream>
#define Log(x) std::cout << x << std::endl;
using namespace std;

int ATM() {

		int withdraw;
		Log("Enter withdrawl amount:");
		std::cin >> withdraw;

		float accBalance;
		Log("Enter balance amount:");
		std::cin >> accBalance;

		if (!(withdraw % 5) && (accBalance >= (withdraw + 0.5))) {
			accBalance = ((accBalance - withdraw) - 0.5);
		}

		printf("%.2f", accBalance);

	return 0;
}