#pragma once
#include <iostream>
class Stock
{
private: //��Ű��ȭ, ����ȭ, ĸ��ȭ, ������ ����
	std::string company;
	long shares;
	double share_value;
	double total_value;
	void set_total();
public:
	Stock();  //�ȸ���� Default -> ���� ��������� ������
	Stock(const std::string company, long number, double price);
	~Stock();
	void acquire(const std::string& company, long n, double price);
	void buy(long number, double price);
	void sell(long number, double price);
	void update(double price);
	void show();

	const Stock& topvalue(const Stock& stock) const;
};



