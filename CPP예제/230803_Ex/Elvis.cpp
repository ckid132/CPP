#include <iostream>

int main()
{
	// ? :
	// ? = Elvis
	// nullable type = null ���� ���� �� �ִ� ��
	// Ŭ������ �ڷ���, �⺻�� �ڷ���(JAVA)
	// �������� �ڷ��� -> nullptr ���� ���� �� �ִ� ��
	//int ? value = nullptr;
	//if(value.isNull()) exit();
	//int value1 = nullptr;

	int value_a = 0;
	int value_b = 0;

	std::cout << "�ΰ��� ������ �Է� : ";
	std::cin >> value_a >> value_b;

	int max_value = (value_a > value_b) ? value_a : value_b;

	int min_value = (value_a < value_b) ? value_a : value_b;

	std::cout << "�ִ밪�� : " << max_value;
	std::cout << "�ּҰ��� : " << min_value;
}