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
		/*std::cout << this->get_numbers_string << std::endl;*/ // �߸��� ���� ��� x
		StringBad::get_numbers_string;
		return this->length;
	}
	static int get_numbers_string()
		//static �Լ��� this�� ���
		//�ν��Ͻ� ������ ������ �� ����.
		//static �������� ������ �� �ִ�.
	{
		//StringBad::number_string = 10'000;
		return StringBad::number_object;
	}

	StringBad() //��ü �ν��Ͻ� ����
	{
		this->str = new char[BUFSIZ]; //system size 512
		this->length = BUFSIZ;
		//StringBad::number_object = 0; //0���� ����
		StringBad::number_object++;
		std::cout << "��ü ���� : " << StringBad::number_object << std::endl;

	}
	StringBad(const char* str)
	{
		this->length = std::strlen(str);
		this->str = new char[length + 1]; //'\0'
		strcpy_s( this->str, length + 1, str);
		StringBad::number_object++;
		std::cout << "��ü ���� : " << StringBad::number_object << std::endl;

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
		delete[] this->str; //����ġ���ִ� �ּҸ� ��������
		this->length = rhs.length;
		this->str = new char[length + 1];
		strcpy_s(this->str, length + 1, rhs.str);
		std::cout << this->str << std::endl;
		return *this;
	}
	~StringBad() //�Ҹ���
	{
		std::cout << "~StringBad()" << std::endl;
		StringBad::number_object--;
		std::cout << "��ü ���� : "<<	StringBad::number_object << std::endl;
		delete[]this->str; //�޸� ����
		this->length = 0;
		/*StringBad::number_object = 0;*/
		this->str = nullptr;
	}

	friend std::ostream& operator<<(std::ostream& os, const StringBad& rhs);
};

int StringBad::number_object {0};//�ʱ�ȭ
std::ostream& operator<<(std::ostream& os, const StringBad& rhs)
{
	os << rhs;
	return os;
}



int main()
{
	StringBad str1 = "Hello world"; //StringBad("Hello world");
	//StringBad(str2) = StringBad(str1);

	StringBad str2(str1); //���������
	StringBad str3 = "Android";

	str3 = str2; //������ �����ε�
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