
#include <iostream>

int main()
{
	int updates = 6;
	int* p_updates;
	
	p_updates = &updates;
	
	//값을 두가지 방법으로 표현
	std::cout << "값 : updates = " << updates;
	std::cout << ", *p_updates = " << p_updates << std::endl;

	//주소를 두가지 방법으로 표현
	std::cout << "주소 : &updates = " << &updates;
	std::cout << ", p_updates = " << p_updates << std::endl;

	//포인터를 사용하여 값을 변경
	*p_updates = *p_updates + 1;
	std::cout << "주소 : &updates = " << &updates;
	std::cout << ", p_updates = " << p_updates << std::endl;
}

