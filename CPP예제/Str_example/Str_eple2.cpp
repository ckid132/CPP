
#include <iostream>
#include <cstring>

int main()
{
	std::string str1 {"panther"}; //string class�� null �� ����
	const char* str2{ "panda" }; //4byte or 8byte
	char str3[]{ "panda" };


	int len1 = str1.size(); // ������ ũ��
	int len2 = strlen(str2);

	std::cout << len1 << std::endl;
	std::cout << len2 << std::endl;

	std::cout << sizeof str1 << std::endl;
	std::cout << sizeof str2 << std::endl; //64��Ʈ���� 8byte (������)
	std::cout << sizeof str3 << std::endl;

}
