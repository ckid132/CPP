#include "BankAccount.h"
#include <cstring>

BankAccount::BankAccount()
{
    this->name = nullptr;
    this->account_num = 0L;
    this->pin_num = 0;
    this->deposit = 0;
    this->money = 0;
    this->credit_rating = 0;
    this->gender = '\0';
    this->phone_num = nullptr;
    this->address = nullptr;
    
}

BankAccount::~BankAccount() 
{

    delete[] this->name;
    delete this->phone_num;
    delete this->address;
}

BankAccount::BankAccount(char* name, long account_num, int pin_num, int deposit, int money, int credit_rating, int gender, char* phone_num, char* address)
{
    this->name = name;
    this->account_num = account_num;
    this->pin_num = pin_num;
    this->deposit = deposit;
    this ->money = money;
    this->credit_rating = credit_rating;
    this->gender = gender;
    this->phone_num = phone_num;
    this->address = address;
}

void BankAccount::set_name(char* newname)
{
    delete[] name;
    name = new char[strlen(newname) + 1];
    strcpy_s(name, strlen(newname) + 1, newname);
}

void BankAccount::set_account_num(long newaccount_num)
{
    this->account_num = newaccount_num;
}

void BankAccount::set_pin_num(int newpin_num)
{
    this->pin_num = newpin_num;
}

void BankAccount::set_deposit(int newdeposit)
{
    this->deposit = newdeposit;
}

void BankAccount::set_money(int money)
{
    this->money = money;
}

void BankAccount::set_credit_rating(int newcredit_rating)
{
    this->credit_rating = newcredit_rating;
}

void BankAccount::set_gender(int newgender)
{
    this->gender = newgender;
}

void BankAccount::set_phone_num(char* newphone_num)
{
    delete[] this->phone_num;
    this->phone_num = new char[strlen(newphone_num) + 1];
    strcpy_s(this->phone_num, strlen(newphone_num) + 1, newphone_num);
}

void BankAccount::set_address(char* address)
{
    delete[] this->address;
    this->address = new char[strlen(address) + 1];
    strcpy_s(this->address, strlen(address) + 1,address);
}


char* BankAccount::get_name()
{

    return name;
}

long BankAccount::get_account_num()
{
    return account_num;
}

int BankAccount::get_pin_num()
{
    return pin_num;
}

int BankAccount::get_deposit()
{
    return deposit;
}

int BankAccount::get_credit_rating()
{
    return credit_rating;
}

int BankAccount::get_gender()
{
    return gender;
}

char* BankAccount::get_phone_num()
{
    return phone_num;
}

char* BankAccount::get_address()
{
    return address;
}


void BankAccount::find_name(BankAccount* acc, int usr_cnt, const char* targetName)
{
    for (int i = 0; i < usr_cnt; ++i)
    {
        if (strcmp(acc[i].get_name(), targetName) == 0)
        {
            std::cout << "�̸� : " << acc[i].get_name() << std::endl;
            std::cout << "���� ��ȣ : " << acc[i].get_account_num() << std::endl;
            std::cout << "��� ��ȣ : " << acc[i].get_pin_num() << std::endl;
            std::cout << "���� : " << acc[i].get_gender() << std::endl;
            std::cout << "��ȭ ��ȣ : " << acc[i].get_phone_num() << std::endl;
            std::cout << "�ּ� : " << acc[i].get_address() << std::endl;
            /*acc[i].show();*/
            std::cout << " ****************************** " << std::endl;
            return;
        }
    }

    std::cout << "�̸��� \"" << targetName << "\"�� ���� ã�� �� �����ϴ�." << std::endl;
}

void BankAccount::find_vip(BankAccount* acc, int usr_cnt)
{
    int maxDeposit = 0;
    int maxDepositIndex = -1;

    for (int i = 0; i < usr_cnt; ++i)
    {
        if (acc[i].get_deposit() > maxDeposit)
        {
            maxDeposit = acc[i].get_deposit();
            maxDepositIndex = i;
        }
    }

    if (maxDepositIndex != -1)
    {
        std::cout << "���� ���� �Ա��� ���� ����:" << std::endl;
        acc[maxDepositIndex].show();
        std::cout << " ****************************** " << std::endl;
    }
    else
    {
        std::cout << "�Ա� ������ �����ϴ�." << std::endl;
    }
}

void BankAccount::show()
{
    std::cout << "�̸� : " << name << std::endl;
    std::cout << "���� ��ȣ : " << account_num << std::endl;
    std::cout << "��� ��ȣ : " << pin_num << std::endl;
    std::cout << "���� : " << gender << std::endl;
    std::cout << "��ȭ ��ȣ : " << phone_num << std::endl;
    std::cout << "�ּ� : " << address << std::endl;
}//���

void BankAccount::input()
{
    char temp[BUFSIZ]; // �ӽ� ���ڿ� ����

    std::cout << "�̸� : ";
    std::cin.getline(temp, sizeof(temp));
    set_name(temp);

    std::cout << "���� ��ȣ : ";
    std::cin >> account_num;
    std::cin.ignore(); // �Է� ���� ����

    std::cout << "��� ��ȣ: ";
    std::cin >> pin_num;
    std::cin.ignore();

  

    std::cout << "���� : ";
    std::cin >> gender;
    std::cin.ignore();

    std::cout << "��ȭ ��ȣ : ";
    std::cin.getline(temp, sizeof(temp));
    set_phone_num(temp);

    std::cout << "�ּ� �Է� : ";
    std::cin.getline(temp, sizeof(temp));
    set_address(temp);

    std::cout << " ****************************** " << std::endl;
} //������Է�