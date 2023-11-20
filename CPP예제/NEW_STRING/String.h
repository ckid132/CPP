#pragma once
#include <iostream>
class String
{

private:
	unsigned int length;
	char* ptr_str_heap;
	static unsigned int numberOfObject;
public:
	String(); //default 생성자
	~String();// destructor;
	explicit String(const char*); //명시적
	//String("Hello"); // String str = "Hello";
	const char* get_str(); // 문자열 검색 메소드
	String(const String&); // 복사생성자
	static const unsigned int get_numberOfObject();

	friend std::ostream& operator << (std::ostream&, const String&);
	const String operator=(const String&);
	const String operator+(const String&);
	const char operator[](const unsigned int);
	




};

