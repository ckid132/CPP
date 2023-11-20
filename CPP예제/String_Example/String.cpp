#include <cstring>
#include "String.h"
//+ 문자열 합하기


unsigned int String::numberOfObject = 0;



String::String()
{
	++String::numberOfObject;
	std::cout << "String() 객체 생성 ! " << std::endl;
	this->length = 0;
	this->str = new char[1];
	std::cout << String::get_numberOfObject() << std::endl;
}

String::~String()
{
	--String::numberOfObject;
	std::cout << "String() 객체 소멸 !" << std::endl;
	this->length = 0;
	delete[] this->str;
	std::cout << String::get_numberOfObject() << std::endl;
}

String::String(const char* str)
{
	++String::numberOfObject;
	std::cout << "String(const char*) 객체 생성 ! " << std::endl;
	this->length = strlen(str) + 1;  
	this->str = new char[length]; //문자열 길이에따라 heap메모리 생성
	strcpy_s(this->str, length, str); //문자열 복사
}

char* String::get_str()
{
	return this->str;
}

std::ostream& operator <<(std::ostream& os, const String& rhs)
{
	os << rhs.str;
	return os;
}

String::String(const String& rhs)
{
	this->length = rhs.length + 1;
	this->str = new char[length];
	strcpy_s(this->str, this->length, rhs.str);
	++String::numberOfObject;
	std::cout << String::numberOfObject << std::endl;
}

String& String::operator=(const String& rhs)
{
	if (this == &rhs) return *this;
	delete[] this->str;
	this->length = rhs.length + 1;
	this->str = new char[this->length];
	strcpy_s(this->str, this->length, rhs.str);
	return *this;
}

