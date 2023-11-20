
#include <iostream>

int main()
{
    const uint32_t SIZE{ 20U };
    char name[SIZE]{};
    char dessert[ SIZE ]{};
    std::cout << "이름을 입력 하시오 ";
    std::cin.getline(name, SIZE);

    std::cout << "좋아하는 디저트는 ";
    std::cin.getline(dessert, SIZE);
    std::cout << "디저트를 준비하겠습니다 " << name << " 님" << std::endl;

    std::cin.get(name, SIZE).get(); //chain rule

    return 0;
}

