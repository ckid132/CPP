

#include <iostream>

int month_age(int age)
{
	return age * 12;
}

int main()
{
	int age;
	std::cout << "���� : ";
	std::cin >> age;

	int month = month_age(age);

	std::cout << age << "���� : " << month << "��" << std::endl;

	return 0;
}
