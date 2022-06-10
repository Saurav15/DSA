#include<iostream>
#define Log(x) std::cout << x << std::endl;

int addTwoNumbers() {
	int T;
	Log("Enter Test Cases: ");
	std::cin >> T;

	while (T > 0)
	{
		int a, b;
		Log("Enter A and B: ");
		std::cin >> a >> b;

		std::cout << a + b << std::endl;
		T--;
	}
	
	return 0;
}