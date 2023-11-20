#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"

template <typename T>
class SafeArray : public Array<T> {
private:

public:

	explicit SafeArray(int size = Array<T>::ArraySIZE); // 1. 사이즈넣기
	SafeArray(const T *pArr, int size); 
	SafeArray(const SafeArray<T>& rhs);	
	virtual ~SafeArray();
	
	SafeArray<T>& operator = (const SafeArray<T>& arr);
	//+-, -=, *=, /=, %= 배열이라 연산식 안만들어
	bool operator ==(const SafeArray<T>& arr) const; //비교 같다
	bool operator !=(const SafeArray<T>& arr) const; //비교 다르다
	
	virtual T& operator [](int index);
	virtual const T& operator[](int index) const;

};

#include <cassert>

template <typename T>
SafeArray<T>::SafeArray(int size)
: Array<T>(size)
{

}
template <typename T>
SafeArray<T>::SafeArray(const T *pArr, int size)
: Array<T>(pArr, size)
{

}
template <typename T>
SafeArray<T>::SafeArray(const SafeArray<T>& arr)
: Array<T>( static_cast<Array<T> >(arr)) //slicing //컴파일에 타입체크 후 형변환 //문제있는데 그럼에도 강제로 형변환 ????
{

}
template <typename T>
SafeArray<T>::~SafeArray()
{
	//this->Array<T>::~Array() is automatically called.
}
template <typename T>
SafeArray<T>& SafeArray<T>::operator=(const SafeArray<T>& arr)
{
	this->Array<T>::operator=( static_cast<Array<T> >(arr);
	
	return *this;
}

template <typename T>
bool SafeArray<T>::operator==(const SafeArray<T>& arr) const
{
	return this->Array<T>::operator ==( static_cast<Array<T> >(arr));
}

template <typename T>
bool SafeArray<T>::operator!=(const SafeArray<T>& arr) const
{
	return this->Array<T>::operator !=( static_cast<Array<T> >(arr));
}


//상속의 전형적인 모양 부모쪽에 그대로 쓰고 자식쪽에서 추가적인 코드
template <typename T>
T& SafeArray<T>::operator[](int index)
{
	// boundary check!
	assert(index >= 0 && index < this->Array<T>::size());
	
	return this->Array<T>::operator[](index);
}

template <typename T>
const T& SafeArray<T>::operator[](int index) const
{
	// boundary check!
	assert(index >= 0 && index < this->Array<T>::size_);
	
	return this->Array<T>::operator[](index);
}

#endif
