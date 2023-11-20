#include <iostream>

int main()
{
	char ch;
	int count = 0;

	std::cout << "문자들을 입력하시오; 끝내려면 #을 입력하시오 : \n";
	std::cin >> ch;

	while (ch != '#')
	{
		std::cout << ch;
		++count;
		std::cin >> ch;
	}
	std::cout << std::endl << count << " 문자를 읽었습니다. \n";
	return 0;
}