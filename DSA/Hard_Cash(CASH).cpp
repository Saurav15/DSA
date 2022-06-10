#include<iostream>
#define Log(x) std::cout << x << std::endl;

int hardCash() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		Log("Enter bags : ");
		int noOfBags;
		std::cin >> noOfBags;

		Log("Enter the divisible number : ");
		int divisibleBy;
		std::cin >> divisibleBy;

		int coinsInNBags[100002];
		for (int i = 0; i < noOfBags; i++)
		{
			std::cin >> coinsInNBags[i];
		}

		// Main logic
		int coinSurplus = 0;
		int coinsToSpend = 0;
		int cPointer = 0;
		int minDonatableCoin = INT32_MAX;
		int pointerToMinDonatableCoin = 0;

		for (int i = 0; i < noOfBags; i++)
		{
			if (i <= cPointer) {
				int coins = coinsInNBags[i] % divisibleBy;
				coinSurplus = coinSurplus + coins;
			}
			else {
				if ((coinsInNBags[i] % divisibleBy) != 0) {
					int coins = divisibleBy - (coinsInNBags[i] % divisibleBy);
					coinsToSpend = coinsToSpend + coins;
				}
			}
		}

		minDonatableCoin = coinSurplus - coinsToSpend;

		////sandho 
		//if (noOfBags > 1 && minDonatableCoin < 0) {
		//	minDonatableCoin = INT32_MAX;
		//}
		////

		//for (int i = 1; i < noOfBags; i++)
		//{
		//	int coins = coinsInNBags[i] % divisibleBy;
		//	if (coins != 0) {
		//		coinSurplus = coinSurplus + coins;
		//		coinsToSpend = coinsToSpend - (divisibleBy - coins);
		//	}

		//	int difference = coinSurplus - coinsToSpend;

		//	if (difference >= 0 && (minDonatableCoin > difference)) {
		//		minDonatableCoin = difference;
		//		pointerToMinDonatableCoin = i;
		//	}
		//}
		//std::cout << pointerToMinDonatableCoin << std::endl;
		//std::cout << minDonatableCoin << std::endl;


		if (noOfBags == 1) {
			std::cout << coinSurplus << std::endl;
		}
		else {
			for (int i = 1; i < noOfBags; i++)
			{
				if (minDonatableCoin < 0) {
					minDonatableCoin = INT32_MAX;
				}
				int coins = coinsInNBags[i] % divisibleBy;
				if (coins != 0) {
					coinSurplus = coinSurplus + coins;
					coinsToSpend = coinsToSpend - (divisibleBy - coins);
				}

				int difference = coinSurplus - coinsToSpend;

				if (difference >= 0 && (minDonatableCoin > difference)) {
					minDonatableCoin = difference;
					pointerToMinDonatableCoin = i;
				}
			}
			std::cout << minDonatableCoin << std::endl;
		}

		T--;
	}
	return 0;
}