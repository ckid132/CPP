#include <iostream>

int main()
{
	std::string word;
	std::cout << "���ڸ� �Է��ϼ��� ";
	std::cin >> word;
	//�迭ó�� animal => a n i m a l
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