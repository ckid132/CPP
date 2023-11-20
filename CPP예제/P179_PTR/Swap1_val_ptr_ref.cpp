#include <iostream>

void swapping_VAL(int value_a, int value_b)         //call by value ,  안전성
{
    int temp_value = 0;
    temp_value = value_a;
    value_a = value_b;
    value_b = temp_value;
}
void swapping_PTR(int* value_a, int* value_b)      //call by point  , 값이 훼손될수도 있음
{
    int temp_value = 0;
    temp_value = *value_a;
    *value_a = *value_b;
    *value_b = temp_value;
}
void swapping_REF(int& value_a, int& value_b)      //call by reference  , 값이 훼손될수도 있음
{
    int temp_value = 0;
    temp_value = value_a;
    value_a = value_b;
    value_b = temp_value;
}


int main()
{
    int value_a = 10;
    int value_b = 20;

    swapping_VAL(value_a, value_b);             //값이 복사 된다(in stack)
    std::cout << value_a << std::endl;
    std::cout << value_b << std::endl;      //원본 유지, side effect로 swapping되었다.
    std::cout << std::endl;

    swapping_PTR(&value_a, &value_b);
    std::cout << value_a << std::endl;
    std::cout << value_b << std::endl;      //원본값이 바뀐다.
    std::cout << std::endl;

    int value_aa = 10;
    int value_bb = 20;
    int& ref_value_a = value_aa;            //안전성 있는 포인터
    int& ref_value_b = value_bb;            //안전성 있는 포인터

    swapping_REF(ref_value_a, ref_value_b);
    std::cout << value_aa << std::endl;
    std::cout << value_bb << std::endl;
}