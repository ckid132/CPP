#include <iostream>

int main()
{
	int i = 10;
	while (i < 10)
	{
		++i;
	}
	int* ptr{ &i };
	*++ptr; //* ++ ptr
	++*ptr; //++ * ptr

	*ptr++;
	*(++ptr);

	int by = 10;
	i = i + by;
	i += by;

}

//int a = 10;
//++a;
//a++;
//std::cout << a << std::endl;
//int b = a + 10;
//a = a + 1;
//b;
//

//int c = ++a + a++;