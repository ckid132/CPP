#pragma once
#include <iostream>
class String
{
private :
	char* str; //문자열 지시포인터
	unsigned int length;	//문자열 길이
	static unsigned int numberOfObject; //객체수
public :
	static unsigned int get_numberOfObject()
	{
		return String::numberOfObject;
	}

	String();
	~String();
	
	String(const char* str);
	char* get_str();
	friend std::ostream& operator << (std::ostream& os, const String& rhs);
	String(const String& rhs);
	String& operator=(const String& rhs);









};

