#include <iostream>

int main()
{
	std::cout << "좋아하는 수를 입력 하시오";
	int value = 0;
	do {
		std::cin >> value;
		std::cout << "입력한 숫자 " << value << std::endl;


	} while (value != 7);

	std::cout << "당신이 좋아하는 숫자는 : " << value << " 입니다.\n";

}