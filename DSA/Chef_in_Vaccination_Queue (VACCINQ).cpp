#include<iostream>
#define Log(x) std::cout << x << std::endl;
#include<array>

using namespace std;

int chiefInVaccinQueue() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		int lengthOfQueue, chefsPosition, timeTakenForChild, timeTakenForElderly;
		Log("Enter lengthOfQueue , chefsPosition , timeTakenForChild , timeTakenForElderly : ");
		cin >> lengthOfQueue >> chefsPosition >> timeTakenForChild >> timeTakenForElderly;

		// Array i/p
		int arr[101];
		for (int i = 1; i <= lengthOfQueue; i++)
		{
			cin >> arr[i];
		}

		// Main Logic
		int totalTime = 0;
		for (int i = 1; i <= chefsPosition; i++)
		{
			if (arr[i] == 0) {
				totalTime = totalTime + timeTakenForChild;
			}
			else {
				totalTime = totalTime + timeTakenForElderly;
			}
		}

		cout << totalTime << endl;
		T--;
	}
	return 0;
}