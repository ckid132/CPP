#include <iostream>

int main()
{
	std::string word;
	std::cout << "문자를 입력하세요 ";
	std::cin >> word;
	//배열처럼 animal => a n i m a l
	// word[0] word[1]
	std::cout << word << std::endl;

	for (int i = 0; i < word.size(); ++i)
	{
		std::cout << word[i] << "\t";
	}
	std::cout << std::endl;

	for (int i = word.size() - 1; i >= 0;  --i)
	{
		std::cout << word[i] << "\t";
	}
}