#include <iostream>
#include "BankAccount.h"
#include <cstdlib>


int main()
{
    //고객 입력
    int usr_cnt = 0;
    std::cout << "고객 수 : ";
    std::cin >> usr_cnt;
    std::cin.get();

    BankAccount* acc = new BankAccount[usr_cnt];

    for (int i = 0; i < usr_cnt; ++i)
    {
        acc[i].input();
    }

    //메뉴
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

            // 등급 설정
            for (int i = 0; i < usr_cnt; ++i)
            {
                if (strcmp(acc[i].get_name(), searchName) == 0)
                {
                    std::cout << acc[i].set_credit_rating() << "등급" << std::endl;
                    break;
                }
            }
            break;
        }

        case 2:
        {
            system("cls");

            std::cout << "[2] VIP이름, 잔액조회 " << std::endl;
            // 가장 많이 입금한 고객 찾기
            BankAccount::find_vip(acc, usr_cnt);
            break;
        }

        case 3:
        {
            system("cls");
            std::cout << "[3] 입금" << std::endl;

            std::cout << "입금할 계좌 번호를 입력하세요: ";
            long account_Number;
            std::cin >> account_Number;
            std::cin.ignore();

            bool foundAccount = false;
            for (int i = 0; i < usr_cnt; ++i)
            {
                if (acc[i].get_account_num() == account_Number)
                {
                    foundAccount = true;

                    std::cout << "입금할 금액을 입력하세요 : ";
                    int newDeposit;
                    std::cin >> newDeposit;
                    std::cin.ignore();

                    acc[i].set_deposit(newDeposit);
                    break;
                }
            }

            if (!foundAccount)
            {
                std::cout << "계좌를 찾을 수 없습니다." << std::endl;
            }
            break;
        }
        case 4:
        {
            system("cls");
            std::cout << "[4] 출금" << std::endl;

            std::cout << "출금할 계좌 번호를 입력하세요: ";
            long account_Number;
            std::cin >> account_Number;
            std::cin.ignore();

            bool foundAccount = false;
            for (int i = 0; i < usr_cnt; ++i)
            {
                if (acc[i].get_account_num() == account_Number)
                {
                    foundAccount = true;

                    std::cout << "비밀번호를 입력하세요: ";
                    int pin;
                    std::cin >> pin;
                    std::cin.ignore();

                    std::cout << "출금할 금액을 입력하세요: ";
                    int withdrawAmount;
                    std::cin >> withdrawAmount;
                    std::cin.ignore();

                    acc[i].withdraw(withdrawAmount, pin);
                    break;
                }
            }

            if (!foundAccount)
            {
                std::cout << "계좌를 찾을 수 없습니다." << std::endl;
            }
            break;
        }

        case 5:
        {
            system("cls");
            std::cout << "[5] 잔액 조회" << std::endl;

            std::cout << "이름을 입력하세요: ";
            char nameToCheck[BUFSIZ];
            std::cin.getline(nameToCheck, sizeof(nameToCheck));

            std::cout << "비밀번호를 입력하세요: ";
            int pinToCheck;
            std::cin >> pinToCheck;
            std::cin.ignore();

            acc[usr_cnt].check_balance(nameToCheck, pinToCheck, acc, usr_cnt);
            break;
        }
        case 6:
        {
            system("cls");
            std::cout << "[6] 계좌입력 정보 조회" << std::endl;

            std::cout << "조회할 계좌 번호를 입력하세요: ";
            long accountNumberToCheck;
            std::cin >> accountNumberToCheck;
            std::cin.ignore();

            BankAccount::show_account_number(acc, usr_cnt, accountNumberToCheck);
            break;
        }

        case 7:
        {
            system("cls");
            std::cout << "[7] 기타 (전화번호, 주소, 이름) 입력시 계좌조회" << std::endl;

            std::cout << "찾을 정보(이름, 전화번호, 주소)를 입력하세요: ";
            char searchInfo[BUFSIZ];
            std::cin.getline(searchInfo, sizeof(searchInfo));
            BankAccount::find_by_info(acc, usr_cnt, searchInfo);
            break;
        }


        case 8:
        {
            std::cout << "업무를 종료 합니다." << std::endl;
            delete[] acc;
            return 0;
        }

        }
        std::cout << "계속하려면 Enter " << std::endl;
        std::cin.get();
    }




    std::cout << "저희 은행을 이용해주셔서 감사합니다." << std::endl;

    delete[] acc;
    return 0;
}