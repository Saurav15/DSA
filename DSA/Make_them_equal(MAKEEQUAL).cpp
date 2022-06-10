#include<iostream>
#define Log(x) std::cout << x << std::endl;

int makeThemEqual() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		Log("Enter n: ");
		int n;
		std::cin >> n;

		// Take array i/p
		int arr[100000];
		int max = INT32_MIN;
		int min = INT32_MAX;

		for (int i = 0; i < n; i++)
		{
			std::cin >> arr[i];
			if (arr[i] > max) {
				max = arr[i];
			}
			if(arr[i] < min) {
				min = arr[i];
			}
		}
		std::cout << max - min << std::endl;

		T--;
	}
	return 0;
}