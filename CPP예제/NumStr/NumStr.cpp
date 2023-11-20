#include <iostream>

int main()
{
	const uint32_t SIZE{ 20U };
	char name[SIZE]{};

	std::cin.get();

	char dessert[SIZE]{};
	std::cin.get();
	std::cout << "지금 사시는 아파트에 언제 입주하셧습니까?\n";
	int year;
	std::cin >> year;
	std::cin.get();
	std::cout << "사시는 도시를 말씀헤주세요\n";
	char address[80];
}
