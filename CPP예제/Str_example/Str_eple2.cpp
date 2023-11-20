
#include <iostream>
#include <cstring>

int main()
{
	std::string str1 {"panther"}; //string class는 null 이 빠짐
	const char* str2{ "panda" }; //4byte or 8byte
	char str3[]{ "panda" };


	int len1 = str1.size(); // 글자의 크기
	int len2 = strlen(str2);

	std::cout << len1 << std::endl;
	std::cout << len2 << std::endl;

	std::cout << sizeof str1 << std::endl;
	std::cout << sizeof str2 << std::endl; //64비트여서 8byte (포인터)
	std::cout << sizeof str3 << std::endl;

}
