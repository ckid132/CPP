

#include <iostream>

int month_age(int age)
{
	return age * 12;
}

int main()
{
	int age;
	std::cout << "나이 : ";
	std::cin >> age;
	
	int month = month_age(age);

	std::cout << age << "개월 : " << month << "일" << std::endl;

	return 0;
}
