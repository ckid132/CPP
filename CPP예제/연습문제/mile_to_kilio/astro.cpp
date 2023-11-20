
#include <iostream>

double light_to_astro(double light_year)
{

	return light_year * 63240;
}


int main()
{
	double light_year;
	std::cout << "광년입력 : ";
	std::cin >> light_year;

	double astro = light_to_astro(light_year);

	std::cout << light_year << "광년은 : " << astro << "천문단위 입니다" << std::endl;



	return 0;

}

