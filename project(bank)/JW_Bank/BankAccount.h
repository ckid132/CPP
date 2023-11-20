#pragma once
#include <iostream>

class BankAccount
{
private:
	char* name;				//�̸�
	long account_num; ;		//����
	int pin_num;			//��й�ȣ
	int deposit;			//����
	int money;				//�ܾ�
	int credit_rating;		//�ſ�
	char gender;			//����
	char* phone_num;		//��ȭ��ȣ
	char* address;			//�ּ�

public:
	BankAccount();
	~BankAccount();

	BankAccount(char* name, long account_num, int pin_num, int deposit, int money, int credit_rating, int gender, char* phone_num, char* address);

	void set_name(char* name);
	void set_account_num(long account_num);
	void set_pin_num(int pin_num);
	void set_deposit(int deposit);
	void set_money(int money);
	int set_credit_rating();
	void set_gender(int gender);
	void set_phone_num(char* phone_num);
	void set_address(char* address);

	char* get_name();
	long get_account_num();
	int get_pin_num();
	int get_money();
	int get_deposit();
	int get_credit_rating();
	char get_gender();
	char* get_phone_num();
	char* get_address();

	void input();

	static void find_name(BankAccount* acc, int usr_cnt, const char* targetName);	void show();
	static void find_vip(BankAccount* acc, int usr_cnt);
	void withdraw(int amount, int pin);
	void check_balance(const char* targetName, int pin, BankAccount* acc, int usr_cnt);
	static void show_account_number(BankAccount* acc, int usr_cnt, long account_number);
	static void find_by_info(BankAccount* acc, int usr_cnt, const char* targetInfo);
	
	//void show();
};