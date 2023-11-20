#include "String.h"
#include <cstring>

// static ���� �ʱ�ȭ
unsigned int String::numberOfObject = 0u;


const unsigned int String::get_numberOfObject()
{
	std::cout << String::numberOfObject << std::endl;
	return String::numberOfObject;
} // �ǽð� ��ü ����

String::String() // Default�� ������
{
	this->length = 0;
	this->ptr_str_heap = new char[1];
	++String::numberOfObject; //��ü 1�� ���� !
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
	++String::numberOfObject; //��ü ����
	this->length = std::strlen(rhs) + 1; //���ڿ� �����Է¹ޱ�
	this->ptr_str_heap = new char[this->length]; //��ŭ heap�޸� ����
	strcpy_s(this->ptr_str_heap, this->length, rhs);
}

//Copy Constructor
String::String(const String& rhs)
{
	++String::numberOfObject; //��ü ����
	this->length = rhs.length + 1;
	this->ptr_str_heap = new char[this->length];
	strcpy_s(this->ptr_str_heap, this->length, rhs.ptr_str_heap);
}

// Debugging �� ���ڿ� �˻� �޼ҵ�
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

