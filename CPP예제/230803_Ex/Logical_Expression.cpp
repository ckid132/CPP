#include <iostream>

//AND ==> &&
//OR  ==> ||
//NOT ==> !
//XOR ==> ^
//논리적 -> Logic (True, False) -> 0이외의 값(!0), 0
int main()
{
	bool state = true && false; // false; && => 둘다 1이여야 true

	bool state2 = 5 > 3 || 5 > 10; // true => 둘중 1이면 true

	bool state3 = 5 < 8 and 5 > 2; // 둘다 맞음 true

	bool state4 = !(5 > 8); // ()먼저하고 not 만남 -> true
	bool state5 = not(8 > 5); // false

	bool state6 = 5 > 3 ^ 10 > 5; //같으면 0 달라야 1


	std::cout << "값을 입력해라 : ";
	int input_value = 0;
	std::cin >> input_value;
	if (3 < input_value and input_value < 7) {
		std::cout << "Good" << std::endl;
	}
	else
		std::cout << "BAD" << std::endl;


}

