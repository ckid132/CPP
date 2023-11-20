#include <cassert>
#include "array.h"

//const int ARRAYSIZE = 100; //전역변수 상수화(const)
const int Array::ARRAYSIZE = 100;
/*
Array::Array() //디폴트 생성자
:pArr_(new int[100]), size_(100)
{
	
	assert(pArr_ );
}
*/

Array::Array(int size) 
: pArr_(new int[size]), size(size_ = size) //<<멤버변수가 레퍼런스변수 or 상수 (생성자 초기화리스트)
{
	//pArr_ = new int[size];
	assert(pArr_ );
	//size_ = size; //멤버함수 this-> 생략 @@인자/멤버함수 구별@@

}

Array::Array(const int *pArr, int size) //복사생성자
: pArr_(new int[size]), size(size_ = size)
{
	assert(pArr_ );
	for(int i = 0; i < size; ++i)
	{
		pArr_[i] = pArr[i];
	}
}

Array::Array(const Array& arr)
: pArr_(new int[size]), size(size_ = size)
{
	assert(pArr_ );
	
	for(int i = 0; i < arr.size_; ++i)
	{
		pArr_[i] = arr.pArr_[i];
	}
}

Array::~Array() //소멸자
{	
	delete [] pArr_;
}


Array& Array::operator=(const Array& arr) //기존에 갖고있던거 날림
{
	delete [] pArr_;
	
	pArr_ = new int[arr.size];
	assert(pArr_ );
	size_ = arr.size_;
	
	for(int i = 0; i < arr.size_; ++i)
	{
		pArr_[i] = arr.pArr_[i];
	}
	
	return *this;
}


bool Array::operator==(const Array arr) const
{
	if(size_ != arr.size_)
	return false;
	
	int i;
	for(int i = 0; i < arr.size_; ++i)
	{
		if(pArr_[i] != arr.pArr_[i])
		break;
	}
//	if (i == arr.size_)
//		return true;
//	else
//		return false;
		
	return i == arr.size;
}

bool Array::operator!=(const Array& arr) const
{
	return !this->operator==(arr);
}

int& Array::operator[](int index)
{
	return pArr_[index];
}

const int& Array:operator[](int index) const
{
	return pArr_[index];
}

int Array::size() const
{
	return size_;
}

