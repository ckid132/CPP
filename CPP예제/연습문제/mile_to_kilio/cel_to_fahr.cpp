
#include <iostream>

double cel_to_fahr(double c)
{
	return 1.8 * cel + 32.0;
}


int main()
{
	double cel;
	std::cout << "¼·¾¾ÀÔ·Â :";
	std::cin >> cel;

	double fahr = cel_to_fahr(cel);

	std::cout << "¼·¾¾ :" << cel << " È­¾¾ :" << fahr << std::endl;

	return 0;
}

