
#include <iostream>

double mile_to_kilo(double mile)
{
	double mile_to_kilo = 1.60934;

	return mile * mile_to_kilo;
}


int main()
{
	double mile;
	std::cout << "마일을 입력하시오 : ";
	std::cin >> mile;

	double kilo = mile_to_kilo(mile);

	std::cout << mile << "마일 : " << kilo << "킬로미터" << std::endl;



	return 0;

}

