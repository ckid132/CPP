
#include <iostream>

double cel_to_fahr(double cel)
{
	return 1.8 * cel + 32.0;
}


int main()
{
	double cel;
	std::cout << "섭씨입력 :";
	std::cin >> cel;

	double fahr = cel_to_fahr(cel);

	std::cout<< "섭씨 :" << cel << " 화씨 :" << fahr << std::endl;
	
	return 0;
}

