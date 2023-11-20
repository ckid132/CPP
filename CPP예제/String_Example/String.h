#pragma once
#include <iostream>
class String
{
private :
	char* str; //���ڿ� ����������
	unsigned int length;	//���ڿ� ����
	static unsigned int numberOfObject; //��ü��
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

