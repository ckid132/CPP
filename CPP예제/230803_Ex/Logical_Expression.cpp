#include <iostream>

//AND ==> &&
//OR  ==> ||
//NOT ==> !
//XOR ==> ^
//���� -> Logic (True, False) -> 0�̿��� ��(!0), 0
int main()
{
	bool state = true && false; // false; && => �Ѵ� 1�̿��� true

	bool state2 = 5 > 3 || 5 > 10; // true => ���� 1�̸� true

	bool state3 = 5 < 8 and 5 > 2; // �Ѵ� ���� true

	bool state4 = !(5 > 8); // ()�����ϰ� not ���� -> true
	bool state5 = not(8 > 5); // false

	bool state6 = 5 > 3 ^ 10 > 5; //������ 0 �޶�� 1


	std::cout << "���� �Է��ض� : ";
	int input_value = 0;
	std::cin >> input_value;
	if (3 < input_value and input_value < 7) {
		std::cout << "Good" << std::endl;
	}
	else
		std::cout << "BAD" << std::endl;


}

