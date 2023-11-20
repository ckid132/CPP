
#include <iostream>
#include <string>
#include <cstring>


int main()
{
	char charr[20];
	std::string str;
	
	std::cout << "입력 이전에 charr에 있는 문자열의 길이:"
			<< strlen(charr) << std::endl;
	std::cout << "입력 이전에 str에 있는 문자열의 길이 : "
			<< str.size() << std::endl;
	std::cout << "텍스트 한 행을 입력하시오 : \n";
	std::cin.getline(charr, 20);	//최대 길이를 나타낸다
	std::cout << "입력한 텍스트 : " << charr << std::endl;
	std::cout << "또 다른 텍스트 한 행을 입력하시오 : ";
	getline(stdcin, str); // 이제 cin은 길이 지정자가 아니라 매개변수
	std::cout << "입력한 텍스트" << str << std::endl;
	std::cout << "입력 후"


			

	return 0;
}
