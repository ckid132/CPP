
#include <iostream>

double light_to_astro(double light_year)
{

	return light_year * 63240;
}


int main()
{
	double light_year;
	std::cout << "�����Է� : ";
	std::cin >> light_year;

	double astro = light_to_astro(light_year);

	std::cout << light_year << "������ : " << astro << "õ������ �Դϴ�" << std::endl;



	return 0;

}

