
#include <iostream>

int main()
{
	std::string str1 = "Hello world";
	std::string str2 = "Nice to meet you";
	const char* str3 = "Welcome";
	char str4[] = { "Android" };
	const char* str5 = str1.c_str(); // c스타일
	

	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;
	std::cout << str3 << std::endl;
	std::cout << str4 << std::endl;
	std::cout << str5 << std::endl;
	std::cout << str1 + " " + str2 << std::endl; // c++ 에서는 문자열 + 가능
	std::cout << str1.at(0) << std::endl;
	str1 += str2; // str1 = str1 + str2;
	std::cout << str1 << std::endl;
}
