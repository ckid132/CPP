
#include <iostream>
class BankAccount
{
private:
    long account_number;// 멤버변수
    std::string name;
    double money;
public:
    BankAccount(/*this*/) // 디폴트 생성자
    {
        this->account_number = 0L;
        (*this).name = "";
        (*this).money = 0.0;
    }

    ~BankAccount()
    {
        std::cout << "그동한 저희 은행을 이용해주셔서 감사" << std::endl;
        std::cout << this->name << " 님의 잔고는 이제 0이 됩니다." << std::endl;

        this->account_number = 0L;
        this->money = 0.0;
        this->name = "";
    }


    BankAccount(const long account_number/*로컬변수(빠지면사라짐)*/ , std::string name, const double money)
    {
        this->account_number = account_number;// 멤버변수 (사라지지않음)
        this->name = name;
        this->money = money;

    }
    double get_money() const
    {
        return this->money;
    }

    double withdraw(double money)
    {
        if (money < 0)
        {
            std::cout << "음수입력 ㄴㄴ" << std::endl;
            return this->get_money();
        }
        if (money > this->money)
        {
            std::cout << "잔금보다 많아 " << std::endl;
            return this->get_money();
        }
        this->money -= money;
        return this->money;
    }

    void deposit(double money)
    {
        if (money < 0)
        {
            std::cout << "음수입력 ㄴㄴ " << std::endl;
        }
        this->money += money;
        std::cout << "현재 잔고는 : " << this->get_money() << std::endl;
    }

};




int main()
{
    class BankAccount charles(); //explicit

    BankAccount henry{ BankAccount(1010, "Henry", 1'000)};
    henry.get_money();


    std::cout << henry.get_money() << std::endl;
    henry.withdraw(9000);
    std::cout << henry.get_money() << std::endl;
    henry.deposit(100000);
    
    return 0;

}
