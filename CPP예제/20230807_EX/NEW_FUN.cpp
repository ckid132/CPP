#include <iostream>
#include <new>


namespace KarL
{
	int value_a = 10;
	double value_b = 20;
	int function(int param)
	{
		return param + 10;
	}
}

namespace Brian
{
	int value_a = 10;
	double value_b = 20;
	int function(int param)
	{
		return param + 10;
	}
}

int main()
{
	int* ptr_heap = new int[BUFSIZ];
	delete ptr_heap;
	ptr_heap = nullptr;
	
	std::cout << KarL::value_a << std::endl;
	std::cout << Brian::value_a << std::endl;


}