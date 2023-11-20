#include <iostream>
#include <array>

int main()
{
	int numbers[]{ 1, 2, 3, 4, 5 };
	for (auto&& i : numbers) 
	{
		std::cout << i << "\t";
	}
	std::cout << std::endl;
	//std::cout << numbers[100] << std::endl;

	std::array<int, 5> array1{1, 2, 3, 4, 5};
	for (auto&& i : array1)
	{
		std::cout << i << "\t";
	}
	std::cout << std::endl;

	for (int i = 0; i < 5; ++i) 
	{
		std::cout << array1.at(i) << std::endl;
	}
	
	std::cout << std::endl;

	//for (auto i = array1.begin(); i < array1.end(); ++i) 
	//{
	//	std::cout << array1 << std::end;
	//}

}
