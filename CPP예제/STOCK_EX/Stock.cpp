#include "Stock.h"
void Stock::set_total(/*this*/)//<<0��° �Ű�����
{
	(*this).total_value = this->shares * this->share_value;


}

void Stock::acquire(const std::string& company, long number, double price)

{
	if (number < 0)
	{
		std::cout << "�ֽ��� ������ �� �� �����ϴ�." << std::endl;
		this->shares = 0;
		return;
	}
	this->shares = number;
	this->company = company;
	this->share_value = price;
	this->set_total();
}


void Stock::buy(long number, double price)
{
	if (number < 0)
	{
		std::cout << "�ֽ��� ������ �� �� �����ϴ�." << std::endl;
		return;
	}
	this->shares += number;
	this->share_value += price;
	this->set_total();

}

void Stock::sell(long number, double price)
{
	if (number < 0)
	{
		std::cout << "�ŵ� �ֽ� ���� ������ �ɼ� ����." << std::endl;

	}
	else if (number > shares)
	{
		std::cout << "���� �ֽĺ��� ���� �ֽ��� �ŵ��� �� ����. " << std::endl;
	}
	else {
		this->shares -= number;
		this->share_value = price;
		this->set_total();
	}
}

void Stock::update(double price)
{
	this->share_value = price;
	this->set_total();
}

void Stock::show()
{
	std::cout << "ȸ��� : " << this->company << std::endl;
	std::cout << "�ֽ� �� : " << this->shares << std::endl;
	std::cout << "�ְ� : $ : " << this->share_value << std::endl;
	std::cout << "�ֽ� �� ��ġ : " << this->total_value << std::endl;
}


Stock::Stock()
{
	//�ʱⰪ �����Ҷ� ���� ����
	this->company = "";
	this->shares = 0;
	this->share_value = 0.0;
	this->total_value = 0.0;
	std::cout << "�������� ����Ʈ �����Ѵ� ! " << std::endl;
}

//������ �Ҹ��� Ŭ���� ���� �Լ� => ����Ÿ���� ����

Stock::~Stock()
{
	std::cout << "�� �Ҹ��Ѵ� ! " << std::endl;
}

Stock::Stock(/*this*/std::string company, long number, double price)
{
	if (number < 0)
	{
		std::cout << "������ ������ ���� ! " << std::endl;
		return;
	}
	this->company = company;
	this->shares = number;
	this->share_value = price;

}

const Stock& Stock::topvalue(const Stock& stock) const //�б����� = ������ ����
{
	if (stock.total_value > this->total_value)
	{
		return stock;
	}
	return *this;//�ּҷ� ����

}
