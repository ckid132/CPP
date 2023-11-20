
#include <iostream>
#include <cmath> // 제공되는 헤더 
//#include "cmath.h" <<< 사용자가 만든 헤더 (현재 내 폴더에 있어야 사용 가능)

double area{ 0.0 };
double squre() 
{
	const double result { area * area };
	return result;
}


int main()
{
	double area{ 0.0 };
	//float area2{ 0.0F };
	std::cout << "마루면적을 평방피트 단위로 인력하세요 : ";
	std::cin >> area;
	double side;
	side = sqrt(area);
	std::cout << "사각형 마루라면 한변이" << side << "피트에 상당합니다." << std::endl;
	std::cout << "멋지네요 !" << std::endl;

	std::cout << "제곱은 ?" << squre() << std::endl;
	
	return 0;

}

