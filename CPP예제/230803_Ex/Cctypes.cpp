#include <iostream>
#include <cctype>


int main()
{
	std::cout << "�м��� �ؽ�Ʈ�� �Է��Ͻÿ�. "
				 "�Է��� ���� @���� ǥ���Ͻÿ�.\n";

	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int other = 0;

	std::cin.get(ch);

	while (ch != '@')
	{
		if (isalpha(ch)) 
			chars++;
		else if (isspace(ch)) 
			whitespace++;
		else if (isdigit(ch)) 
			digits++;
		else if (ispunct(ch)) 
			punct++;
		else
			other++;
		std::cin.get(ch);
	}

	std::cout << "���ĺ� ���� " << chars << ", "
		<< "ȭ��Ʈ�����̽� " << whitespace << ", "
		<< "���� " << digits << ", "
		<< "������ " << punct << ", "
		<< "��Ÿ " << other << std::endl;
	return 0;
}