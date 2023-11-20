

#include <iostream>

int main()
{
    int auks, bats, coots;

    auks = 19.9 + 11.99;

    bats = (int)19.99 + (int)11.99;     //구식 C 스타일

    coots = int(19.99) + int(11.99);    //신식 C++ 스타일

    std::cout << "바다오리 = " << auks << ", 박쥐 = " << bats;
    std::cout << ", 검둥오리 = " << coots << std::endl;
    

    char ch = 'Z';
    std::cout << "코드 " << ch << " 의 값은 ";               //char로 출력
    std::cout << int(ch) << std::endl;                     //int로 출력
    std::cout << "네, 코드 Z의 값은 ";                       
    std::cout << static_cast<int>(ch) << std::endl;     //int로 출력
    return 0;

}

