#include<iostream>
#define Log(x) std::cout << x << std::endl;

int richieRich() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		int currentWealth;
		int wealthIncreasePerYear;
		int wealthGoal;
		Log("Enter CurrentWealth , WealthGoal , wealthIncreasedPerYear : ");
		std::cin >> currentWealth >> wealthGoal >> wealthIncreasePerYear;

		int years = (wealthGoal - currentWealth) / wealthIncreasePerYear;

		std::cout << years << std::endl;
		T--;
	}
	return 0;
}