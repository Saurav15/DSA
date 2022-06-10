#include<iostream>
#define Log(x) std::cout << x << std::endl;

int motivation() {
	int T;
	Log("Enter number of TC:");
	std::cin >> T;

	while (T--)
	{
		int numberOfMovies,diskSpace;
		int movieSize, imdbRating;

		Log("Enter numOfMovies , diskSpace : ");
		std::cin >> numberOfMovies >> diskSpace;

		int rating = 0;
		while (numberOfMovies--) {
			Log("Enter movieSize , imdbRating : ");
			std::cin >> movieSize >> imdbRating;

			if ((movieSize <= diskSpace) && (imdbRating > rating)) {
				rating = imdbRating;
			}
		}
		std::cout << rating << std::endl;
		
	}
	return 0;
}