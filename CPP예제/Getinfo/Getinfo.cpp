
#include <iostream>

int main()
{
	std::cout << "당근을 몇개 갖고 있니??";
	int carrot{ 0 };
	scanf_s("%d", &carrot);
	std::cout << "너 당근이" << carrot << "개를 가지고 있네" << std::endl;

	std::cout << "다시 당근 갯수 몇개니?";
	std::cin >> carrot;
	std::cout << "당근이 또" << carrot << "개를 가지고 있네" << std::endl;




}
