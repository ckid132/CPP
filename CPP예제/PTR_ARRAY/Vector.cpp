#include <iostream>
#include <vector>

int main()
{
	int numbers[] = {1, 2, 3, 4};
	std::vector<int> vec1{1, 2, 3, 4 }; //std::vector<double> vec2;
	std::cout << "배열 몇개 필요? : ";
	int number_of_array = 0;
	std::cin >> number_of_array;
	//vec1.resize(number_of_array);

	for (int i = 0; i < number_of_array; ++i) 
	{
		int temporary_value = 0;
		std::cout << i + 1 << "  ";
		std::cin >> temporary_value;
		//vec1.push_back(temporary_value);
		vec1.at(i) = temporary_value;
		std::cout << std::endl;
	}

	for (auto&& i : vec1) 
	{
		std::cout << i << std::endl;
	}
	


}
