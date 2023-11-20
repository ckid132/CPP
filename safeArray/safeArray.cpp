#include "safeArray.h"
#include <cassert>
SafeArray::SafeArray(int size)
: Array(size)
{

}

SafeArray::SafeArray(const int *pArr, int size)
: Array(pArr, size)
{

}

SafeArray::SafeArray(const SafeArray& arr)
: Array( static_cast<Array>(arr)) //slicing //컴파일에 타입체크 후 형변환 //문제있는데 그럼에도 강제로 형변환 ????
{

}

SafeArray::~SafeArray()
{
	//this->Array::~Array() is automatically called.
}

SafeArray& SafeArray::operator=(const SafeArray& arr)
{
	this->Array::operator=( static_cast<Array>(arr);
	
	return *this;
}

bool SafeArray::operator==(const SafeArray& arr) const
{
	return this->Array::operator ==( static_cast<Array>(arr));
}

bool SafeArray::operator!=(const SafeArray& arr) const
{
	return this->Array::operator !=( static_cast<Array>(arr));
}


//상속의 전형적인 모양 부모쪽에 그대로 쓰고 자식쪽에서 추가적인 코드
int& SafeArray::operator[](int index)
{
	// boundary check!
	assert(index >= 0 && index < this->Array::size());
	
	return this->Array::operator[](index);
}

const int& SafeArray::operator[](int index) const
{
	// boundary check!
	assert(index >= 0 && index < this->Array::size_);
	
	return this->Array::operator[](index);
}
