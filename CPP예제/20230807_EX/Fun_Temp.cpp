#include <iostream>

template <class Any>

void Swap(Any &a, Any &b);

int main()
{
	int i = 10;
	int j = 20;

	std::cout << "i, j = " << i << ", " << j << ".\n";
	std::cout << "컴파일러가 생성한 int형 교환기를 사용하면 \n";
	Swap(i, j);
	std::cout << "이제 i , j =" << i << ", " << j << ".\n";
	
	double x = 24.5;
	double y = 81.7;

	std::cout << "x, y = " << x << ", " << y << ".\n";

	return 0;
}

template <class Any>
void Swap(Any a, Any& b)
{
	Any temp;
	temp = a;
	a = b;
	b = temp;
}