#include<iostream>
#define Log(x) std::cout << x << std::endl;

int icpcBaloon() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		int arr[15];
		int vibgyor = 0;
		int steps = 0;

		Log("Enter n : ");
		int n;
		std::cin >> n;
		for (int i = 0; i < n; i++)
		{
			std::cin >> arr[i];
			if (vibgyor < 7) {
				if (arr[i] <= 7) {
					vibgyor++;
					steps++;
				}
				else {
					steps++;
				}
			}
		}

		std::cout << steps << std::endl;
		T--;
	}
	return 0;
}