#include <iostream>

int main()
{
	std::cout << "�����ϴ� ���� �Է� �Ͻÿ�";
	int value = 0;
	do {
		std::cin >> value;
		std::cout << "�Է��� ���� " << value << std::endl;


	} while (value != 7);

	std::cout << "����� �����ϴ� ���ڴ� : " << value << " �Դϴ�.\n";

}