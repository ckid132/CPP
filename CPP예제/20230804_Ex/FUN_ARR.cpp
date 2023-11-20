#include <iostream>

void show_oldstyle_array(const int[]); // 소비형
void show_newstyle_array(const int[], const int); // 소비형


int main()
{
	int array1[]{ 1, 2, 3, 4, 5, 6, 7 };
	int array2[]{ 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	
	
	//for (int i = 0; i < sizeof array1 / sizeof array1[0]; ++i) // magic code --> general code
	//{
	//	std::cout << array1[i] << "\t";
	//}
	//std::cout << std::endl;

	//for (int i = 0; i < sizeof array2 /sizeof array2[0]; ++i) 
	//{
	//	std::cout << array2[i] << "\t";
	//}
	//std::cout << std::endl;

	//show_oldstyle_array(array1);
	//show_oldstyle_array(array2);


	show_newstyle_array(array1, sizeof array1 / sizeof array1[0]);
	show_newstyle_array(array2, sizeof array2 / sizeof array2[0]);

}

void show_oldstyle_array(const int param[])
{
	for (int i = 0; i < sizeof param / sizeof param[0]; ++i) {
		std::cout << param[i] << "\t";
	}
	std::cout << std::endl;

}

void show_newstyle_array(const int param[], const int size)
{
	for (int i = 0; i < size; ++i) {
		std::cout << param[i] << "\t";
	}
	std::cout << std::endl;

}
