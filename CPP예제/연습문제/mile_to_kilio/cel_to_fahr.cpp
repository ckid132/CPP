
#include <iostream>

double cel_to_fahr(double c)
{
	return 1.8 * cel + 32.0;
}


int main()
{
	double cel;
	std::cout << "�����Է� :";
	std::cin >> cel;

	double fahr = cel_to_fahr(cel);

	std::cout << "���� :" << cel << " ȭ�� :" << fahr << std::endl;

	return 0;
}

