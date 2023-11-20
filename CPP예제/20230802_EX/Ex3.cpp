#include <iostream>
//[3] 의미는 3칸을 건너면 다음행이 나온다는 뜻

void show_array(int(*param)[3])
{

	int* ptr = &(param[0][0]);
	for (int i = 0; i < 9; ++i)
	{
		std::cout << ptr[i] << std::endl;

	}
}



int main()
{
	int ary[][3] = { 
		{1, 2, 3}, 
		{4, 5, 6}, 
		{7, 8, 9} 
	};
	show_array(ary);
	
	int array1[]{ 1,2,3 };
	int array2[]{ 4,5,6 };
	int array3[]{ 7,8,9 };
	int* ptr_array1 = array1;
	int* ptr_array2 = array2;
	int* ptr_array3 = array3;

	int* ptr_array[3] = { ptr_array1, ptr_array2, ptr_array3, };
	std::cout << "값 1 : " << ptr_array[0][0] << std::endl;

	
	//std::cout << ary << std::endl;
	//std::cout << ary[0] << std::endl;
	//std::cout << &(ary[0][0])<< std::endl;
	//int* ptr = &(ary[0][0]);
	//std::cout << *(ptr+ 3 + 3) << std::endl;
	//int(*ptr2)[3] = ary;
	//*(ptr + 3 + 3) = 70;

	//std::cout << ary[2][0] << std::endl;
	//std::cout << ptr2[0][0] << std::endl;
	
}	
