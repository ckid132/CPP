#pragma once
#include <iostream>
class String
{

private:
	unsigned int length;
	char* ptr_str_heap;
	static unsigned int numberOfObject;
public:
	String(); //default ������
	~String();// destructor;
	explicit String(const char*); //�����
	//String("Hello"); // String str = "Hello";
	const char* get_str(); // ���ڿ� �˻� �޼ҵ�
	String(const String&); // ���������
	static const unsigned int get_numberOfObject();

	friend std::ostream& operator << (std::ostream&, const String&);
	const String operator=(const String&);
	const String operator+(const String&);
	const char operator[](const unsigned int);
	




};

