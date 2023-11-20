
#include <iostream>

int main()
{
	//std::cout.setf(std:: ios_base::hex, std::ios_base::basefield);

	std::cout.setf(std:: ios_base:: scientific, std::ios_base::floatfield);

	float tree = 3;
	int guest = static_cast<int>(3.4430);
	int guest = int(3.9832);
	int debt{ 7.2E12 }; // 유니폼 이니셜 라이즈 -> 혹모실예방

	std::cout << tree << std::endl;
	std::cout << guest << std::endl;
	std::cout << debt << std::endl;



	return 0;

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴


	//int value_1 = 10;
	//int value_2 = 2;
	//int result = value_1 % value_2; // << 모듈연산자 뒤에가 중요함 뒤에보다 앞이 크면 안된다

	//std::cout << result << std::endl;



	//int whole_number = 0;
	//double fractional_number = 0.0;
	//wchar_t letter = L'\0';

	//std::wcout << L"Enter on Integer, a double, and a character.";
	//std::wcin >> whole_number >> fractional_number >> letter;
	//std::wcout << whole_number << "\t" << fractional_number << "\t" << letter << std::endl;


