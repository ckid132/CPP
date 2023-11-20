#include <iostream>





struct inflat //인터페이스 -> 명사로 설정  , struct = 사용자 데이터 타입
{
    char name[20];      //20
    //std::string name;
    float volume;       //4
    double price;       //8
};

int main()
{
    inflat guests[2] =
    {
        {"Bambi", 0.5, 21.99},
        {"Godzilla", 2000, 565.99}
    };
     
    std::cout << guests[0].name << "와 " << guests[1].name
        << "의 부피를 합하면 \n"
        << guests[0].volume + guests[1].volume
        << " 세제곱피트입니다. \n";

    return 0;


}