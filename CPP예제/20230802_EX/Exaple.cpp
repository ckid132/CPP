#include <iostream>

int main()
{
	; //¹®Àå null statement
	int x;
	std::cout << (x = 100) << std::endl;
	std::cout << (x < 3) << std::endl;
	3 == 3;

	std::cout.setf(std::ios_base::boolalpha);
	std::cout << (x > 3) << std::endl;
}