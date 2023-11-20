// carrots.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int carrot = 25;  //선언과 함께 초기화 
	//carrot = 25;

	std::cout << " 나는 당근을";
	std::cout << carrot;
	std::cout << "개 가지고 있다";
	std::cout << std :: endl;
	
	carrot = carrot - 1;
	std::cout << "아삭아삭, 이제 당근은" << carrot << "개이다" << std :: endl;

	
	return 0;

}

