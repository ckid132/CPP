#include <iostream>





struct inflat //�������̽� -> ���� ����  , struct = ����� ������ Ÿ��
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
     
    std::cout << guests[0].name << "�� " << guests[1].name
        << "�� ���Ǹ� ���ϸ� \n"
        << guests[0].volume + guests[1].volume
        << " ��������Ʈ�Դϴ�. \n";

    return 0;


}