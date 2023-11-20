#include <iostream>

int main()
{
	const unsigned int DELAY{ 1'000U };
	time_t next_time{ 0u };
	while (true)
	{
		time_t previous_time{ clock() };
		if (previous_time - next_time >= DELAY)
		{
			next_time = clock();
			std::cout << "1�� �������ϴ�. " << std::endl;
		}
	}
}