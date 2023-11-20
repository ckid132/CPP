#include <iostream>

const char* qualify[4] = {
	"만미터 달리기",
	"모래사장 씨름",
	"비치 발리",
	"부메랑 던지기"
};

int main()
{
	std::cout << "나이를 입력하세요 ";
	int age;
	int index;
	std::cin >> age;

	if (17 < age and age < 35) {
		index = 0;
	}else if(35 <= age and age < 50){
		index = 1;
	}else if(50 <= age and age < 64){
		index = 2;
	}else
		index = 3;
	

	std::cout << qualify[index] << std::endl;
	if (!(index > 5))
		~index; // ~도 not임 , 비트반전

}