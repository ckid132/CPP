
#include <iostream>
#include "BankAccount.h"
#include <cstdlib>


int main()
{
    //BankAccount account;
    int usr_cnt = 0;
    std::cout << "고객 수 : ";
    std::cin >> usr_cnt;
    std::cin.get();

    BankAccount* acc = new BankAccount[usr_cnt];

    for (int i = 0; i < usr_cnt; ++i)
    {
        acc[i].input();
    }

    //for (int i = 0; i < usr_cnt; ++i)
    //{
    //    acc[i].show();
    //}

    //메뉴~~
    while (1)
    {
        system("cls");

        std::cout << "[1] 이름찾기 " << std::endl;
        std::cout << "[2] VIP이름, 잔고조회 " << std::endl;
        std::cout << "[3] 입금 " << std::endl;
        std::cout << "[4] 출금 " << std::endl;
        std::cout << "[5] 잔액 조회 " << std::endl;
        std::cout << "[6] 계좌입력 정보 조회 " << std::endl;
        std::cout << "[7] 기타 (전화번호, 주소, 이름) 입력시 계좌조회 " << std::endl;
        std::cout << "[8] 종료 " << std::endl;
        int sel = 0;
        std::cin >> sel;
        std::cin.get();
           
        switch (sel)
        {
        case 1: 
        {
            system("cls");

            std::cout << "[1] 이름찾기 " << std::endl;
            // 이름검색
            std::cout << "검색할 이름을 입력하세요: ";
            char searchName[BUFSIZ];
            std::cin.getline(searchName, sizeof(searchName));
            BankAccount::find_name(acc, usr_cnt, searchName);
            

            break;
        }
        case 2:
        {
            system("cls");

            std::cout << "[2] VIP이름, 잔고조회 " << std::endl;
            // 가장 많이 입금한 고객 찾기
            BankAccount::find_vip(acc, usr_cnt);
            break;
        }
    }
        std::cout << "계속하려면 Enter " << std::endl;
        std::cin.get();
}




    std::cout << "저희 은행을 이용해주셔서 감사합니다." << std::endl;

    delete[] acc;
    return 0;
}