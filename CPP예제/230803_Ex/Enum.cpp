#include <iostream>

enum COLOR {red, orange, yellow, green, blue, violet, indigo};



int main()
{
	std::cout << "값을 입력 : ";
	int color = 0;
	std::cin >> color;

	while (true)
	{
		switch (color)
		{
		case red: std::cout << "RED" << std::endl;
			break;
		case orange: std::cout << "ORANGE" << std::endl;
			break;
		case yellow: std::cout << "YELLOW" << std::endl;
			break;
		case green: std::cout << "GREEN" << std::endl;
			break;
		case blue: std::cout << "BLUE" << std::endl;
			break;
		case violet: std::cout << "VIOLET" << std::endl;
			break;
		case indigo: std::cout << "INDIGO" << std::endl;
		}

	}
}