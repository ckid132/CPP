
#include <iostream>

int main()
{
	//'\n' = 10;
	//'\r' = 13;
	//'0' = 48;
	char ch = '\0'; // (char)0
	std::cout << "문자 한개 입력 : ";
	std::cin >> ch;

	std::cout << "입력하신 문자 한개는 " << ch << std::endl;

	std::cout << "이름을 입력하세요 : ";
	std::string name = "";
	std::cin >> name;

	std::cout << "당신의 이름은 : " << name <<std::endl;



   
}



//int chest{ 42 };
//int waist{ 42 };
//int inseam{ 42 };

//std::cout << std::hex; //16진수로 변환
//std::cout << chest << std::endl;

//std::cout << std::oct; //8진수로 변환
//std::cout << waist << std::endl;

//std::cout << std::dec; //10진수로 변환
//std::cout << inseam << std::endl;