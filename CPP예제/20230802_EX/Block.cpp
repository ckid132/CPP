#include <iostream>

int main()
{
	std::cout << "�� 5���� �հ�� ����� ���մϴ�. \n";
	std::cout << "�� 5���� �Է��Ͻÿ�. \n";
	double number;
	double sum = 0.0;
	
	for (int i = 1; i <= 5; i++) {
		std::cout << "�� " << i << ": ";
		std::cin >> number;
		sum += number;
	}
	std::cout << "�� 5���� ��� �ԷµǾ����ϴ�. \n";
	std::cout << "�Է��� �� 5���� �հ�� " << sum << "�Դϴ�. \n";
	std::cout << "�Է��� �� 5���� ����� " << sum /5 << "�Դϴ�. \n";
	std::cout << "�����մϴ�. \n";
}
