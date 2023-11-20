#include <iostream>

int main()
{
	int value = 19;
	int* ptr{ nullptr }; //0으로 초기화
	ptr = &value;

	std::cout << *ptr << std::endl;
	//ptr -> 주소값이 나옴
	//value - 19
	*ptr = -19; //포인터 역참조
	std::cout << *ptr << std::endl;



}

