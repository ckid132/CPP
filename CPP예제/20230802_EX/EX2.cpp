#include <iostream>

int main()
{
	double prices[]{ 4.99, 10.99,  6.87, 7.99 };
	for (auto& item : prices)
	{
		std::cout << item << "\t";
		item = item * 100;
	}
	std::cout << std::endl;

	for (auto item : prices)
	{
		std::cout << item << "\t";
		
	}
	std::cout << std::endl;
}