
#include <iostream>

int main()
{
    int space = 0;
    int total = 0;
    char ch = '\0';
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ') {
            ++space;
        }
        ++total;
        std::cin.get(ch);
    }
    std::cout << "총 단어 수는 : " << total << std::endl;
    std::cout << "띄어쓰기는 : " << space << std::endl;

}

