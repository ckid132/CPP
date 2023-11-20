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
    //this->name = name;
    strcpy_s(this->name, strlen(name) + 1, name);
    this->account_num = account_num;
    this->pin_num = pin_num;
    this->deposit = deposit;
    this->money = money;
    this->credit_rating = credit_rating;
    this->gender = gender;
    //this->phone_num = phone_num;
    strcpy_s(this->phone_num, strlen(phone_num) + 1, phone_num);
    //this->address = address;
}

void BankAccount::set_name(char* new_name)
{
    this->name = nullptr;
    name = new char[strlen(new_name) + 1];
    strcpy_s(name, strlen(new_name) + 1, new_name);
}

void BankAccount::set_account_num(long new_account_num)
{
    this->account_num = new_account_num;
}

void BankAccount::set_pin_num(int new_pin_num)
{
    this->pin_num = new_pin_num;
}

void BankAccount::set_deposit(int new_deposit)
{
    if (new_deposit >= 0)
    {
        deposit = new_deposit;
        money = new_deposit;

        std::cout << "예금이 변경되었습니다." << std::endl;
        std::cout << "현재 잔액: " << money << "원" << std::endl;
    }
    else
    {
        std::cout << "입금액은 음수 입력불가" << std::endl;
    }
}

void BankAccount::set_money(int new_money)
{
    this->money = new_money;
}

int BankAccount::set_credit_rating()
{
    if (this->get_deposit() >= 200000000)
    {
        this->credit_rating = 1;
    }
    else if (this->get_deposit() >= 100000000)
    {
        this->credit_rating = 2;
    }
    else if (this->get_deposit() >= 50000000)
    {
        this->credit_rating = 3;
    }
    else
    {
        this->credit_rating = 0;
    }
    return this->credit_rating;
}

void BankAccount::set_gender(int new_gender)
{
    this->gender = new_gender;
}

void BankAccount::set_phone_num(char* new_phone_num)
{
    delete[] this->phone_num;
    this->phone_num = new char[strlen(new_phone_num) + 1];
    strcpy_s(this->phone_num, strlen(new_phone_num) + 1, new_phone_num);
}

void BankAccount::set_address(char* new_address)
{
    delete[] this->address;
    this->address = new char[strlen(new_address) + 1];
    strcpy_s(this->address, strlen(new_address) + 1, new_address);
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

int BankAccount::get_money()
{
    return money;
}

int BankAccount::get_deposit()
{
    return deposit;
}

int BankAccount::get_credit_rating()
{
    return credit_rating;
}

char BankAccount::get_gender()
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


void BankAccount::find_name(BankAccount* acc, int usr_cnt, const char* targetName) //이름으로 정보찾기
{
    for (int i = 0; i < usr_cnt; ++i)
    {
        if (strcmp(acc[i].get_name(), targetName) == 0)
        {
            std::cout << "이름 : " << acc[i].get_name() << std::endl;
            std::cout << "계좌 번호 : " << acc[i].get_account_num() << std::endl;
            std::cout << "비밀 번호 : " << acc[i].get_pin_num() << std::endl;
            std::cout << "잔액 : " << acc[i].get_money() << std::endl;
            std::cout << "성별 : " << acc[i].get_gender() << std::endl;
            std::cout << "전화 번호 : " << acc[i].get_phone_num() << std::endl;
            std::cout << "주소 : " << acc[i].get_address() << std::endl;
            /*acc[i].show();*/
            std::cout << " ****************************** " << std::endl;
            return;
        }
    }

    std::cout << "이름이 \"" << targetName << "\"인 고객을 찾을 수 없습니다." << std::endl;
}

void BankAccount::find_vip(BankAccount* acc, int usr_cnt) //vip
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
        std::cout << "가장 많이 입금한 고객의 정보:" << std::endl;
        std::cout << "이름: " << acc[maxDepositIndex].get_name() << std::endl;
        std::cout << "잔액: " << acc[maxDepositIndex].get_deposit() << std::endl;
    }
    else
    {
        std::cout << "입금 정보가 없습니다." << std::endl;
    }
}

void BankAccount::withdraw(int amount, int pin) //출금/비밀번호입력
{
    if (pin != this->pin_num)
    {
        std::cout << "비밀번호가 일치하지 않습니다." << std::endl;
        return;
    }

    if (amount <= 0)
    {
        std::cout << "출금액은 0보다 커야 합니다." << std::endl;
        return;
    }

    if (amount > money)
    {
        std::cout << "잔액이 부족합니다." << std::endl;
        return;
    }

    money -= amount;
    std::cout << amount << "원이 출금되었습니다. 현재 잔액: " << money << "원" << std::endl;
}

void BankAccount::check_balance(const char* targetName, int pin, BankAccount* acc, int usr_cnt)
{
    for (int i = 0; i < usr_cnt; ++i)
    {
        if (strcmp(acc[i].get_name(), targetName) == 0 && acc[i].get_pin_num() == pin)
        {
            std::cout << "잔액 조회 결과:" << std::endl;
            std::cout << "이름: " << acc[i].get_name() << std::endl;
            std::cout << "계좌 번호: " << acc[i].get_account_num() << std::endl;
            std::cout << "잔액: " << acc[i].get_money() << "원" << std::endl;
            return;
        }
    }

    std::cout << "입력한 정보로 계정을 찾을 수 없습니다." << std::endl;
}

void BankAccount::show_account_number(BankAccount* acc, int usr_cnt, long account_number)
{
    for (int i = 0; i < usr_cnt; ++i)
    {
        if (acc[i].get_account_num() == account_number)
        {
            std::cout << "계좌 정보를 확인합니다:" << std::endl;
            acc[i].show();
            return;
        }
    }

    std::cout << "해당 계좌 번호로 계정을 찾을 수 없습니다." << std::endl;
}

void BankAccount::find_by_info(BankAccount* acc, int usr_cnt, const char* targetInfo)
{
    for (int i = 0; i < usr_cnt; ++i)
    {
        if (strcmp(acc[i].get_name(), targetInfo) == 0 ||
            strcmp(acc[i].get_phone_num(), targetInfo) == 0 ||
            strcmp(acc[i].get_address(), targetInfo) == 0)
        {
            std::cout << "계좌 정보를 확인합니다:" << std::endl;
            acc[i].show();
            return;
        }
    }

    std::cout << "입력한 정보로 계정을 찾을 수 없습니다." << std::endl;
}

void BankAccount::show()
{
    std::cout << "이름 : " << name << std::endl;
    std::cout << "계좌 번호 : " << account_num << std::endl;
    std::cout << "비밀 번호 : " << pin_num << std::endl;
    std::cout << "잔액 : " << money << std::endl;
    std::cout << "성별 : " << gender << std::endl;
    std::cout << "전화 번호 : " << phone_num << std::endl;
    std::cout << "주소 : " << address << std::endl;
}//출력

void BankAccount::input()
{
    char temp[BUFSIZ];

    std::cout << "이름 : ";
    std::cin.getline(temp, sizeof(temp));
    set_name(temp);

    std::cout << "계좌 번호 : ";
    std::cin >> account_num;
    std::cin.ignore();

    std::cout << "비밀 번호: ";
    std::cin >> pin_num;
    std::cin.ignore();



    std::cout << "성별 : ";
    std::cin >> gender;
    std::cin.ignore();

    std::cout << "전화 번호 : ";
    std::cin.getline(temp, sizeof(temp));
    set_phone_num(temp);

    std::cout << "주소 입력 : ";
    std::cin.getline(temp, sizeof(temp));
    set_address(temp);

    std::cout << " ****************************** " << std::endl;
} //사용자입력