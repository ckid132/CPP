#include <iostream>

void swapping_VAL(int value_a, int value_b)         //call by value ,  ������
{
    int temp_value = 0;
    temp_value = value_a;
    value_a = value_b;
    value_b = temp_value;
}
void swapping_PTR(int* value_a, int* value_b)      //call by point  , ���� �Ѽյɼ��� ����
{
    int temp_value = 0;
    temp_value = *value_a;
    *value_a = *value_b;
    *value_b = temp_value;
}
void swapping_REF(int& value_a, int& value_b)      //call by reference  , ���� �Ѽյɼ��� ����
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

    swapping_VAL(value_a, value_b);             //���� ���� �ȴ�(in stack)
    std::cout << value_a << std::endl;
    std::cout << value_b << std::endl;      //���� ����, side effect�� swapping�Ǿ���.
    std::cout << std::endl;

    swapping_PTR(&value_a, &value_b);
    std::cout << value_a << std::endl;
    std::cout << value_b << std::endl;      //�������� �ٲ��.
    std::cout << std::endl;

    int value_aa = 10;
    int value_bb = 20;
    int& ref_value_a = value_aa;            //������ �ִ� ������
    int& ref_value_b = value_bb;            //������ �ִ� ������

    swapping_REF(ref_value_a, ref_value_b);
    std::cout << value_aa << std::endl;
    std::cout << value_bb << std::endl;
}