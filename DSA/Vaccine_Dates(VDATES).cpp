#include<iostream>
#define Log(x) std::cout << x << std::endl;

int vaccineDates() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T > 0)
	{
		int firstDose,minDays,maxDays;
		Log("Enter firstDoseDate(Xdays before) , minDays , maxDays : ");
		std::cin >> firstDose >> minDays >> maxDays;

		if ((firstDose >= minDays) && (firstDose <= maxDays)) {
			std::cout << "Take second dose now" << std::endl;
		}
		else if (firstDose < minDays) {
			std::cout << "Too Early" << std::endl;
		}
		else {
			std::cout << "Too Late" << std::endl;
		}
		T--;
	}
	return 0;
}