#include <iostream>


char* buildstring(char ch, int times) {
	char* ptr_str{ new char[times + 1] };
	ptr_str[times] = '\0';
	while (times--)
	{
		ptr_str[times] = ch;
	}
	return ptr_str;
}

int main()
{
	char* ptr_str = buildstring('H', 10);

	std::cout << ptr_str << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << ptr_str[i] << "\t";
	}
	std::cout << std::endl;
	delete[] ptr_str;

	ptr_str = buildstring('O', 20);
	std::cout << ptr_str << std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << ptr_str[i] << "\t";
	}
	std::cout << std::endl;
	delete[] ptr_str;

	ptr_str = nullptr;
}