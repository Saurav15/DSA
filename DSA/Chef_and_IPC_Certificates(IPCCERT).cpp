#include<iostream>
#define Log(x) std::cout << x << std::endl;
using namespace std;

int IpcCertificates() {
	int numberOfStudents, minTotalLecWatched, totalLectures;
	Log("Enter numberOfStudents , minTotalLecWatched , totalLectures : ");
	cin >> numberOfStudents >> minTotalLecWatched >> totalLectures;

	int arr[1002],totalQuestionAsked;
	int totalWatchTime = 0;
	int result = 0;

	// take array i/p and @end take num Of Times Que Asked i.e. totalQuestionAsked.
	// logic total video watched by student >= minTotalLecWatched && totalQuestionAsked <= 10
	for (int i = 1; i <= numberOfStudents; i++)
	{
		Log("Enter ith students details: ");
		for (int i = 0; i < totalLectures; i++)
		{
			cin >> arr[i];
			totalWatchTime = totalWatchTime + arr[i];
		}
		Log("Enter totalQuestionAsked : ");
		cin >> totalQuestionAsked;

		if ((totalWatchTime >= minTotalLecWatched) && (totalQuestionAsked <= 10)) {
			result = result + 1;
		}

		totalWatchTime = 0;
		cout << "Result : " << result;
	}

	std::cout << result << std::endl;
	return 0;
}