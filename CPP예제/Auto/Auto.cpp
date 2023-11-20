
#include <iostream>
#include <vector>
int main()
{
	/*
	C auto -> 로컬변수
	*/
	//auto n = 100;  // int로 변환	 !!

	std::vector<double> vec;
	std::vector<double>::iterator iter = vec.begin();

	auto iter2 = vec.begin();

	std::cout.put('A') << std::endl;
	std::cout.put(65) << std::endl;
	auto fat = 8.25f / 2.5;

	return 0;
}
