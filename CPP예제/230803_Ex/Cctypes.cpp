#include <iostream>
#include <cctype>


int main()
{
	std::cout << "분석할 텍스트를 입력하시오. "
				 "입력의 끝을 @으로 표시하시오.\n";

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

	std::cout << "알파벳 문자 " << chars << ", "
		<< "화이트스페이스 " << whitespace << ", "
		<< "숫자 " << digits << ", "
		<< "구두점 " << punct << ", "
		<< "기타 " << other << std::endl;
	return 0;
}