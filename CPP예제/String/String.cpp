// String.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    const unsigned int SIZE{ 15u };
    char name1[SIZE]{};
    char name2[SIZE]{ "C++ Cowboy" };

    std::cout << "저는 " << name2 << std::endl;

    std::cout << "안녕하세요 성함이 ? ";
    std::cin >> name1;
    std::cout << "반갑습니다. " << name1 << std::endl;

    name2[3] = '\0';
    std::cout << name2 << std::endl;



    
    return 0;
}


//const char* ptrchar{ "Hello" };
//
//char str1[] = { "Hello" }; //6byte
//
//char str2[] = { 'H', 'e', 'l', 'l', 'o' }; //5byte
//
//char str3[] = "Hello"; //6byte