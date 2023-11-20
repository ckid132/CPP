#include <iostream>
#include "safeArray.h"

int main()
{
	safeArray arr1; //디폴트생성자 safeArray arr1(100);
	safeArray arr2(10);
	//safeArray arr2 = 10; // int타입을 safeArray 타입으로 X  --> explicit
	int nums[] = {1, 2, 3, 4, 5};
	safeArray arr3(nums, 5);
	const safeArray arr4 = arr3; //복사 생성자
	
	arr1 = arr3;
	
	if (arr1 == arr3)
	{
		std::cout << "arr1 and arr3 are equal" << std::endl;
		
	}else{
		std::cout << "arr1 and arr3 are not equal" << std::endl;
	}
	
	for(int i = 0; i < arr1.size(); ++i)
	{
		std::cout << arr1[i] << std::endl; //arr1[i] == arr1.operator[] (i)
	}
		for(int i = 0; i < arr4.size(); ++i) //arr1[i] == arr4.operator[] (i)
	{
		std::cout << arr1[i] << std::endl;
	}
	
	//arr1[5] = 6;
	Array *pArr = &arr1;
	(*pArr)[5] = 6;
	
	
	return 0;
}


//String str{"hello"};
//String str = "hello";
