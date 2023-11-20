#include "String.h"
#include <cstring>

// static 변수 초기화
unsigned int String::numberOfObject = 0u;


const unsigned int String::get_numberOfObject()
{
	std::cout << String::numberOfObject << std::endl;
	return String::numberOfObject;
} // 실시간 객체 구현

String::String() // Default형 생성자
{
	this->length = 0;
	this->ptr_str_heap = new char[1];
	++String::numberOfObject; //객체 1개 생성 !
}

String::~String()
{
	delete[] this->ptr_str_heap;
	this->ptr_str_heap = nullptr;
	--String::numberOfObject;
	if (String::numberOfObject == 0) 
		std::cout << "No Memory Leak" << std::endl;
}

String::String(const char* rhs)
{
	++String::numberOfObject; //객체 생성
	this->length = std::strlen(rhs) + 1; //문자열 갯수입력받기
	this->ptr_str_heap = new char[this->length]; //만큼 heap메모리 생성
	strcpy_s(this->ptr_str_heap, this->length, rhs);
}

//Copy Constructor
String::String(const String& rhs)
{
	++String::numberOfObject; //객체 생성
	this->length = rhs.length + 1;
	this->ptr_str_heap = new char[this->length];
	strcpy_s(this->ptr_str_heap, this->length, rhs.ptr_str_heap);
}

// Debugging 용 문자열 검색 메소드
const char* String::get_str()
{
	return this->ptr_str_heap;
}

std::ostream& operator << (std::ostream& lhs, const String& rhs)
{
	lhs << rhs.ptr_str_heap;
	return lhs;
}

const String String::operator=(const String& rhs)
{
	if (this == &rhs) return *this;
	this->length = 0;
	delete[] this->ptr_str_heap;
	this->length = rhs.length;
	this->ptr_str_heap = new char[this->length];
	strcpy_s(this->ptr_str_heap, this->length, rhs.ptr_str_heap);
	return *this;
}

const String String::operator+(const String& rhs)
{
	String temporary = String();
	temporary.length = 1;
	delete[] temporary.ptr_str_heap;

	temporary.length = this->length + rhs.length;
	temporary.ptr_str_heap = new char[temporary.length];

	for (int i = 0; i < this->length - 1; ++i)
	{
		temporary.ptr_str_heap[i] = this->ptr_str_heap[i];
	}
	int index = 0;

	for (int i = this->length - 1; i < this->length + rhs.length - 1; ++i)
	{
		temporary.ptr_str_heap[i] = rhs.ptr_str_heap[index++];
	}
	temporary.ptr_str_heap[this->length + rhs.length - 1] = '\0';
	return temporary;
}

const char String::operator[] (const unsigned int index)
{
	if (index >= this->length - 1)
	{
		std::cout << "Index is out of bound" << std::endl;
		return '\0';
	}
	return this->ptr_str_heap[index];
}

