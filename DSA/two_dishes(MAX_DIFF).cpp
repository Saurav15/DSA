#include<iostream>
#include <cstdlib>
#include <cmath>
#define Log(x) std::cout << x << std::endl;

// First approach
//int twoDishes() {
//	int T;
//	Log("Enter number of TC:");
//	std::cin >> T;
//
//	while (T > 0)
//	{
//		int maxTastiness;
//		int sumOfTastes;
//		Log("Enter maxTastiness and SumOftastes : ");
//		std::cin >> maxTastiness >> sumOfTastes;
//
//		int maxDiffResult = 0;
//
//		int loopLimit;
//		if (sumOfTastes <= maxTastiness) {
//			loopLimit = ceil(sumOfTastes/2);
//		}
//		else {
//			loopLimit = maxTastiness;
//		}
//
//		for (int i = 0; i <= loopLimit; i++)
//		{
//			int T1 = i;
//			int T2 = abs(i - sumOfTastes);
//			Log("T1");
//			Log(T1);
//			Log("T2");
//			Log(T2);
//			if (T2 <= maxTastiness) {
//				int difference = abs(T1 - T2);
//				if (difference > maxDiffResult) {
//					maxDiffResult = difference;
//				}
//			}
//
//		}
//
//		std::cout << maxDiffResult << std::endl;
//		T--;
//	}
//	return 0;
//}


// Second app
int twoDishes() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		int maxTastiness;
		int sumOfTastes;
		Log("Enter maxTastiness and SumOftastes : ");
		std::cin >> maxTastiness >> sumOfTastes;

		if (sumOfTastes <= maxTastiness) {
			std::cout << sumOfTastes << std::endl;
		}
		else {
			int T1 = maxTastiness;
			int T2 = sumOfTastes - maxTastiness;
			std::cout << abs(T1 - T2) << std::endl;
		}
		T--;
	}
	return 0;
}