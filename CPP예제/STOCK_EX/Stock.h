#pragma once
#include <iostream>
class Stock
{
private: //패키지화, 은닉화, 캡슐화, 응집도 높음
	std::string company;
	long shares;
	double share_value;
	double total_value;
	void set_total();
public:
	Stock();  //안만들면 Default -> 내가 만들면사용자 생성자
	Stock(const std::string company, long number, double price);
	~Stock();
	void acquire(const std::string& company, long n, double price);
	void buy(long number, double price);
	void sell(long number, double price);
	void update(double price);
	void show();

	const Stock& topvalue(const Stock& stock) const;
};



