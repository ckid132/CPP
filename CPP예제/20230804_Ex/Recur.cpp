#include <iostream>


void countdown(int);


int main()
{
	countdown(3);
	
}

void countdown(int number)
{
	std::cout << "ī��Ʈ �ٿ�" << std::endl;
	if (number > 0) countdown(number - 1);

	std::cout << number <<  " : Kaboom !!" << std::endl;
}