#include <iostream>

int main()
{
	char name[BUFSIZ]{};
	std::cout << "영문이름 입력 " << std::endl;
	std::cin.getline(name, BUFSIZ) >> name;
	std::cout << name << std::endl;
	int index = 0;	//초기화 하고
	while (name[index] != '\0')
	{
		std::cout << name[index] << "\t"; //조건
		++index; //탈출할수있게 만듬
	}
	std::cout << std::endl;


}