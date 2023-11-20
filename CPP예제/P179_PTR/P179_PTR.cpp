
#include <iostream>

int main()
{
    int value1 = 100;
    double value2 = 200.10;

    int* ptr_value1 = nullptr;
    double* ptr_value2 = nullptr;

    ptr_value1 = &value1;
    ptr_value2 = &value2;

    *ptr_value1 = -100;
    *ptr_value2 = -200.10;
    //value = -100;

    sizeof value1; //<< 4
    sizeof value2; //<< 8

    sizeof (ptr_value1 + 1) ; //<< 8
    sizeof ptr_value2 + 1; //<< 8

    ptr_value1 = nullptr; // 사용하지않을때는 0으로 초기화
    ptr_value2 = nullptr;
    



    return 0;
}

