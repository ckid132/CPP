#include <iostream>
const int Cities = 5;
const int Years = 4;

int main()
{
	const char* cities[Cities] = {
		"Seoul",
		"Jeju",
		"Busan",
		"Gangneung",
		"Daegu"
	};

	int maxtemps[Years][Cities] =
	{
		{35, 32, 33, 36, 35},
		{33, 32, 34, 35, 31},
		{33, 34, 32, 35 ,34},
		{36, 35, 34, 37, 35}
	};

	std::cout << "2009년부터 2012년까지의 연중 최고온도 \n\n";
	for (int city = 0; city < Cities; ++city)
	{
		std::cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			std::cout << maxtemps[year][city] << "\t";
		std::cout << std::endl;
		
		return 0;
	}





}