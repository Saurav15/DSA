#include<iostream>
#define Log(x) std::cout << x << std::endl;

int smallestPossibleWholeNumber() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		int n, k;
		std::cin >> n >> k;
		
		if (k == 0) {
			std::cout << n  << std::endl;
		}
		else {
			std::cout << n % k << std::endl;
		}
		T--;
	}
	return 0;
}