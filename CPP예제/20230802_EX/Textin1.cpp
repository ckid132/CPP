#include <iostream>

int main()
{
	char ch;
	int count = 0;

	std::cout << "���ڵ��� �Է��Ͻÿ�; �������� #�� �Է��Ͻÿ� : \n";
	std::cin >> ch;

	while (ch != '#')
	{
		std::cout << ch;
		++count;
		std::cin >> ch;
	}
	std::cout << std::endl << count << " ���ڸ� �о����ϴ�. \n";
	return 0;
}