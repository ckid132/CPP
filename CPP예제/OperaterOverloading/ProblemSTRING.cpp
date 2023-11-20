#include <iostream>
#include <cstring>
#pragma once

class StringBad
{
private:
		char* str;
		int length;
		static int number_object;
public:
	int get_length() 
	{
		/*std::cout << this->get_numbers_string << std::endl;*/ // 잘못된 문법 사용 x
		StringBad::get_numbers_string;
		return this->length;
	}
	static int get_numbers_string()
		//static 함수는 this가 없어서
		//인스턴스 변수에 접근할 수 없다.
		//static 변수에만 접근할 수 있다.
	{
		//StringBad::number_string = 10'000;
		return StringBad::number_object;
	}

	StringBad() //객체 인스턴스 생성
	{
		this->str = new char[BUFSIZ]; //system size 512
		this->length = BUFSIZ;
		//StringBad::number_object = 0; //0으로 세팅
		StringBad::number_object++;
		std::cout << "객체 갯수 : " << StringBad::number_object << std::endl;

	}
	StringBad(const char* str)
	{
		this->length = std::strlen(str);
		this->str = new char[length + 1]; //'\0'
		strcpy_s( this->str, length + 1, str);
		StringBad::number_object++;
		std::cout << "객체 갯수 : " << StringBad::number_object << std::endl;

		std::cout << this->str << std::endl;
	}
	StringBad(const StringBad& rhs)
	{
		std::cout << "Copy Constructor" << std::endl;
		StringBad::number_object++;
		this->length = rhs.length;
		this->str = new char[length + 1];
		strcpy_s(this->str, length + 1, rhs.str);
		std::cout << this->str << std::endl;


	}
	StringBad& operator = (const StringBad & rhs)
	{
		if (this == &rhs)
		{
			return *this;
		}
		std::cout << "Assigment Operator called" << std::endl;
		delete[] this->str; //가르치고있는 주소를 지워야함
		this->length = rhs.length;
		this->str = new char[length + 1];
		strcpy_s(this->str, length + 1, rhs.str);
		std::cout << this->str << std::endl;
		return *this;
	}
	~StringBad() //소멸자
	{
		std::cout << "~StringBad()" << std::endl;
		StringBad::number_object--;
		std::cout << "객체 갯수 : "<<	StringBad::number_object << std::endl;
		delete[]this->str; //메모리 누수
		this->length = 0;
		/*StringBad::number_object = 0;*/
		this->str = nullptr;
	}

	friend std::ostream& operator<<(std::ostream& os, const StringBad& rhs);
};

int StringBad::number_object {0};//초기화
std::ostream& operator<<(std::ostream& os, const StringBad& rhs)
{
	os << rhs;
	return os;
}



int main()
{
	StringBad str1 = "Hello world"; //StringBad("Hello world");
	//StringBad(str2) = StringBad(str1);

	StringBad str2(str1); //복사생성자
	StringBad str3 = "Android";

	str3 = str2; //연산자 오버로딩
	return 0;
}
//for (int i = 0; i < 10; ++i)
//{
//	StringBad str1 = StringBad("Hello world");
//	StringBad string_bad = StringBad();
//	std::cout << string_bad << std::endl;

//}
//StringBad string_bad = StringBad();
//
///*StringBad str1 = StringBad("Hello world");*/
///*string_bad.get_length();*/
///*string_bad.get_numbers_string();*/
//std::cout << string_bad << std::endl;
//std::cout << StringBad::get_numbers_string() << std::endl;