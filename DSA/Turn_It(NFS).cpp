#include<iostream>
#include <cmath>
#define Log(x) std::cout << x << std::endl;

int turnIt() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T--)
	{
		int initialSpeed, finalVelocityToCompare, acceleration, distance;
		std::cin >> initialSpeed >> finalVelocityToCompare >> acceleration >> distance;

		// using v2 = u2 + 2(-a)s as acc is actully deceleration
		int finalVelocitySquare = (pow(initialSpeed, 2) - (2 * acceleration * distance));

		if (finalVelocitySquare <= pow(finalVelocityToCompare, 2)) {
			std::cout << "Yes" << std::endl;
		}
		else {
			std::cout << "No" << std::endl;
		}
	}
	return 0;
}