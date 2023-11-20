//문자열 뒤집기
#include <iostream>

int main()
{
	std::cout << "단어를 하나 입력 : ";
	std::string word;
	std::cin >> word;

	char temporary;
	for (int i = word.size() - 1, j = 0; j < i; --i, ++j)
	{
		temporary = word[i];
		word[i] = word[j];
		word[j] = temporary;
	}
	std::cout << word << "\n 종료.\n";



	return 0;

}