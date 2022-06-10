#include<iostream>
#define Log(x) std::cout << x << std::endl;

int chefAndOperator() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		int a, b;
		Log("Enter A and B:");
		std::cin >> a >> b;

		if (a > b) {
			std::cout << '>' << std::endl;
		}
		else if (a < b) {
			std::cout << '<' << std::endl;
		}
		else {
			std::cout << '=' << std::endl;
		}

		T--;
	}
	return 0;
}