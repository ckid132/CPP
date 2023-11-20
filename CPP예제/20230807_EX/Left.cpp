#include <iostream>



const int Arsize = 80;
char* left(const char* str, int n = 1);


int main()
{
	char sample[Arsize];
	std::cout << "문자열을 입력하시오 : " << std::endl;
	std::cin.get(sample, Arsize);
	char* ps = left(sample, 4);
	std::cout << ps << std::endl;
	delete[] ps;
	ps = left(sample);
	std::cout << ps << std::endl;
	delete[] ps;
	return 0;
}

char* left(const char* str, int n)
{
	if (n < 0)
		n = 0;
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];
	while (i <= n)
		p[i++] = '\0';
	return p;
}