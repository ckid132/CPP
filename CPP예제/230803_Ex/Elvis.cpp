#include <iostream>

int main()
{
	// ? :
	// ? = Elvis
	// nullable type = null 값을 넣을 수 있는 값
	// 클래스형 자료형, 기본형 자료형(JAVA)
	// 포인터형 자료형 -> nullptr 값을 넣을 수 있는 값
	//int ? value = nullptr;
	//if(value.isNull()) exit();
	//int value1 = nullptr;

	int value_a = 0;
	int value_b = 0;

	std::cout << "두개의 정수값 입력 : ";
	std::cin >> value_a >> value_b;

	int max_value = (value_a > value_b) ? value_a : value_b;

	int min_value = (value_a < value_b) ? value_a : value_b;

	std::cout << "최대값은 : " << max_value;
	std::cout << "최소값은 : " << min_value;
}