#include "Stock.h"
void Stock::set_total(/*this*/)//<<0번째 매개변수
{
	(*this).total_value = this->shares * this->share_value;


}

void Stock::acquire(const std::string& company, long number, double price)

{
	if (number < 0)
	{
		std::cout << "주식은 음수가 될 수 없습니다." << std::endl;
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
		std::cout << "주식은 음수가 될 수 없습니다." << std::endl;
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
		std::cout << "매도 주식 수는 음수가 될수 없다." << std::endl;

	}
	else if (number > shares)
	{
		std::cout << "보유 주식보다 많은 주식을 매도할 수 없다. " << std::endl;
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
	std::cout << "회사명 : " << this->company << std::endl;
	std::cout << "주식 수 : " << this->shares << std::endl;
	std::cout << "주가 : $ : " << this->share_value << std::endl;
	std::cout << "주식 총 가치 : " << this->total_value << std::endl;
}


Stock::Stock()
{
	//초기값 설정할때 많이 쓰임
	this->company = "";
	this->shares = 0;
	this->share_value = 0.0;
	this->total_value = 0.0;
	std::cout << "내가만든 디폴트 생성한다 ! " << std::endl;
}

//생성자 소멸자 클래스 관련 함수 => 리턴타입이 없다

Stock::~Stock()
{
	std::cout << "난 소멸한다 ! " << std::endl;
}

Stock::Stock(/*this*/std::string company, long number, double price)
{
	if (number < 0)
	{
		std::cout << "음수를 가질수 없다 ! " << std::endl;
		return;
	}
	this->company = company;
	this->shares = number;
	this->share_value = price;

}

const Stock& Stock::topvalue(const Stock& stock) const //읽기전용 = 연산자 금지
{
	if (stock.total_value > this->total_value)
	{
		return stock;
	}
	return *this;//주소로 가라

}
