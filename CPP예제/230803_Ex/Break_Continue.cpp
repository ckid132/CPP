#include <iostream>

int main()
{
	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			if (i == 98) {
				std::cout << "BREAK" << std::endl;
				goto EXIT;

			}
		}
		std::cout << std::endl;
	}
EXIT:
	//std::cout << std::endl;
	return 0;
}