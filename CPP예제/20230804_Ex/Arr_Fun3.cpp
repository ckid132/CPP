#include <iostream>

const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main()
{
	double properties[Max];

	int size = fill_array(properties, Max);
	show_array(properties, size);

	if (size < 0)
	{
		std::cout << "재평가율을 입력하시오 : ";
		double factor;
		while (!(std::cin >> factor)) //잘못된 입력
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "잘못된 입력입니다, 수치를 입력하세요 : ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	std::cout << "프로그램을 종료합니다. \n";
	std::cin.get();
	std::cin.get();
	return 0;
}

int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		std::cout << (i + 1) << "번 부동산의 가격 : $";
		std::cin >> temp;
		if (!std::cin)
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "입력 불량; 입력 과정을 끝내겠습니다. \n";
			break;
		}
		else if(temp < 0)
		
			break;
			ar[i] = temp;
	}
	return i;
}


void show_array(const double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << (i + 1) << "번 부동산 : $";
		std::cout << ar[i] << std::endl;
	}
}

void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] *= r;
	}
}


