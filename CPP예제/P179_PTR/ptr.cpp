#include <iostream>

int main()
{
	int value = 19;
	int* ptr{ nullptr }; //0���� �ʱ�ȭ
	ptr = &value;

	std::cout << *ptr << std::endl;
	//ptr -> �ּҰ��� ����
	//value - 19
	*ptr = -19; //������ ������
	std::cout << *ptr << std::endl;



}

