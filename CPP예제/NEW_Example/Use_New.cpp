#include <iostream>


int main()
{	
	int nights = 1001; //int nights { 1001 };
	int* pt = new int;
	*pt = 1001;

	std::cout << "night�� �� = ";
	std::cout << nights << ": �޸� ��ġ " << &nights << std::endl;
	std::cout << "int��";
	std::cout << "�� = " << *pt << ": �޸� ��ġ " << pt << std::endl;
	
	double* pd = new double;

	*pd = 10000001.0;

	std::cout << "double ��";
	std::cout << "�� = " << *pd << ": �޸� ��ġ " << pd << std::endl;
	std::cout << "������ pd�� �޸� ��ġ : " << &pd << std::endl;

	std::cout << "pt�� ũ�� = " << sizeof(pt);
	std::cout << "*pt�� ũ�� = " << sizeof(*pt) << std::endl;

	std::cout << "pd�� ũ�� = " << sizeof(pd);
	std::cout << "*pd�� ũ�� = " << sizeof(*pd) << std::endl;
	
	return 0;

}