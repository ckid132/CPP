

#include <iostream>

int main()
{
	int tacos[] = { 5, 2, 8, 4, 1, 2, 2, 4, 6, 8 }; //**** 주소값 ****
	int* ptr = tacos;
	ptr = ptr + 1;
	int* pe = &tacos[9]; // == &(tacos[9]);
	pe = pe - 1;

	//변수[i] == *(변수+i);

	std::cout << *ptr << std::endl;
	std::cout << *pe << std::endl;
}
