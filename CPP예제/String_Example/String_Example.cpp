#include "String.h"
#include <iostream>




int main()
{
    String str0{ String()};
    String str1{ String("Android") };
    std::cout << str1 << std::endl;
    String str2 = "Apple";
    std::cout << str2 << std::endl;
    
    String str3 = str2;
    std::cout << str3 << std::endl;

    String str4 = "IOS";
    str4 = str1;
    String str5 = str1 + str2; //원본 수정 x
    //다른언어 인덱서를 오버로딩 많이 제공
    //O.O.P = 절차지향적으로 하기 어려움

    std::cout << str4 << std::endl;
    std::cout << str4[7] << std::endl;
    
}
