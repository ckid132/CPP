#include <iostream>

double gildong(int);

double moonsoo(int);

void estimate(int lines, double (*pt)(int));

inline double gildong(int);

void swap(int& param1, int& param2)
{
	std::cout << (void*)&param1 << std::endl;
	int temporary;
	temporary = param1;
	param1 = param2;
	param2 = temporary;
}

int main()
{
	int value_a = 1000;
	int value_b = 2000;

	std::cout << &value_a << std::endl;

	swap(value_a, value_b);
	std::cout << value_a << std::endl;
	std::cout << value_b << std::endl;

	return 0;
	

}


double gildong(int lns)
{
	return 0.05 * lns;
}

double moonsoo(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pt)(int))
{
	auto temporary = pt;
	std::cout << lines << "행을 작성하는 데 \n";
	std::cout << (*pt)(lines) << "시간이 걸립니다. \n";
}


