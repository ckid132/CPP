#include <iostream>

int main()
{
	long long factorial[16]{};
	factorial[0] = 1LL;
	factorial[1] = 1LL;
	for (int i = 2; i < 16; ++i) 
	{
		factorial[i] = factorial[i - 1] * i;

	}
	int index = 0;
	for (long long i : factorial)
	{
		std::cout << index << "! = " << i << std::endl;
		++index;
	}

	for (int i = 0; i < 16; ++i)
	{
		std::cout << i << "i = " << factorial[i] << std::endl;
	}
}