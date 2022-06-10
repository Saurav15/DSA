#include<iostream>
#define Log(x) std::cout << x << std::endl;

int gasolineIntroduction() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		int n;
		std::cin >> n;

		int gasoline[100];
		for (int i = 0; i < n; i++)
		{
			std::cin >> gasoline[i];
		}

		int totalGas = gasoline[0];
		int totalDistance = 0;

		int i = 1;
		while (totalGas)
		{
			totalGas--;
			totalDistance++;
			if (i < n) {
			totalGas = totalGas + gasoline[i];

			i++;
			}
		}

		std::cout << totalDistance << std::endl;
		T--;
	}
	return 0;
}