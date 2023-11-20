
#include <iostream>

int main()
{
	//int wheel = (20 * 5) + (24 * 6);
	//20 5 * 24 6 * +
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout << "정수 나눗셈 : 9/5 = " << 9 / 5 << std::endl;
	std::cout << "부동 소수점수 나눗셈 : 9.0 / 5.0 = ";
	std::cout << 9.0 / 5.0 << std::endl;
	std::cout << "혼합 나눗셈 : 9.0/5 = " << 9.0 / 5 << std::endl;
	std::cout << "double형 상수 : 1e7/ 9.0 = ";
	std::cout << "1.e7 / 9.0" << std::endl;
	std::cout << "float형 상수 : 1e7f/9.0f = ";
	return 0;
	
	



}

