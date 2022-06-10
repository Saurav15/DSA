#include<iostream>
#define Log(x) std::cout << x << std::endl;

int Remainder() {
	int T;
	Log("Enter Test Cases: ");
	std::cin >> T;


	while (T > 0) {
		int a, b;
		Log("Enter A and B : ");
		std::cin >> a;
		std::cin >> b;

		Log(a % b);
		T--;
	}

	return 0;
}
