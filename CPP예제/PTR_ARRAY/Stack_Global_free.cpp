

#include <iostream>
static int value1 = 100000;
static int value2 = 200000;
//static  �ٸ����Ͽ��� ����X ���� ���Ͽ����� ����
int main()
{
	int value1 = 10;	//������
	int value2 = 20;

	{
		for (int i = 0; i < 10; ++i) 
		{
			int value = 10;
			std::cout << value << std::endl;
			++value;
		}

	}
	//{ //����� �ٸ��� �޸𸮰� �޶� ��� ���� //heap �޸�
	//	 value1 = 1000;
	//	 value2 = 2000;
	//	int* ptr_heap{ new int[BUFSIZ]};
	//	*ptr_heap = value1;
	//	delete[] ptr_heap;
	//}
	int value3 = 300;

	std::cout << value1 << std::endl; //
	std::cout << value2 << std::endl;

	std::cout << ::value1 << std::endl; //������ �ִ¾�
	std::cout << ::value2 << std::endl;
	return 0;
}
