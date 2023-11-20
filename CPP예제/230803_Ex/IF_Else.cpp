#include <iostream>

int main()
{
	char ch;

	std::cout << "타이핑하시면, 반복 수행하겠습니다. \n";
	std::cin.get(ch);
	while (ch == '\n')
	{
		if (ch == '\n')
			std::cout << ch;
		else
			std::cout << ++ch;
		std::cin.get(ch);
	}
	// ++ch대신 ch + 1을 사용하면 어떻게 될까?
	std::cout << "\n 혼란스럽게 해서 죄송합니다. \n";
	//std::cin.get();
	//std::cin.get();
	return 0;
}