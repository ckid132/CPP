#include <iostream>

int main()
{
	std::cout << "���� ����? : ";
	int point = 0;
	std::cin >> point;
	if (point >= 90) {
		std::cout << "A" << std::endl;
	}

	else if (point >= 80) {
		std::cout << "B" << std::endl;
	}

	else if (point >= 70) {
		std::cout << "C" << std::endl;
	}

	else {
		std::cout << "D" << std::endl;
	}
}