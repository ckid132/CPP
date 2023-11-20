#include <iostream>



void simon(int); //함수의 원형
int main()
{
	simon(3);  //simon 함수 호출
	std::cout << "정수를 하나 고르시오 : ";
	int count;
	std::cin >> count;
	simon(count);
	std::cout << "끝" << std::endl;
	return 0;

   
}

void simon(int n)
{
	std::cout << "Simon 왈, 발가락을 " << n << "번 두드려라." << std::endl;
}	//void형 함수에는 return 구문이 필요없다.

