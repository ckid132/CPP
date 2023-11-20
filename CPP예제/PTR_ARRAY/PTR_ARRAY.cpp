

#include <iostream>

int main()
{
    double wages[] = { 10000.0, 2000.0, 3000.0 };
    short stacks[] = { 3, 2, 1 };

    double value_a = 100.0;
    double* ptr_value = &value_a;
    value_a;
    double* ptr_wages = &wages[0];
    std::cout << wages[0] << std::endl;

    short* ptr_stacks = stacks;
    std::cout << *(ptr_stacks + 0) << std::endl;

}
