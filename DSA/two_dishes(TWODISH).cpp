#include<iostream>
#define Log(x) std::cout << x << std::endl;

int twoDishes2() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		int guests, A_fruits, B_vegetables, C_fishes;
		Log("Enter N_guests , fruits , veg , fishes : ");
		std::cin >> guests >> A_fruits >> B_vegetables >> C_fishes;

		if ((guests <= B_vegetables) && ((A_fruits + C_fishes) >= guests)) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
		T--;
	}
	return 0;
}