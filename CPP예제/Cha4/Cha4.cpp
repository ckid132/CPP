
#include <iostream>

int main()
{

	// 변수명을 복수
	// 선언과 동시에 초기화
	int value1 = 10;
	int value2 = 20;
	int humans[7] = { 1, 2, 3, 4, 5, 6, 7 }; //상수형 포인터


	int* ptr = &value1; // 변수형 포인터
	int* ptr = humnans;
	ptr = &value2;

	//humans = &value1; // 불가능

	std::cout << *humans << std::endl;

	std::cout << humans[0] << std::endl;


	
	

	return 0;
}
