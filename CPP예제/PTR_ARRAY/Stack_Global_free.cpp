

#include <iostream>
static int value1 = 100000;
static int value2 = 200000;
//static  다른파일에서 접근X 현재 파일에서만 가능
int main()
{
	int value1 = 10;	//재정의
	int value2 = 20;

	{
		for (int i = 0; i < 10; ++i) 
		{
			int value = 10;
			std::cout << value << std::endl;
			++value;
		}

	}
	//{ //블록이 다르면 메모리가 달라서 사용 가능 //heap 메모리
	//	 value1 = 1000;
	//	 value2 = 2000;
	//	int* ptr_heap{ new int[BUFSIZ]};
	//	*ptr_heap = value1;
	//	delete[] ptr_heap;
	//}
	int value3 = 300;

	std::cout << value1 << std::endl; //
	std::cout << value2 << std::endl;

	std::cout << ::value1 << std::endl; //전역에 있는애
	std::cout << ::value2 << std::endl;
	return 0;
}
