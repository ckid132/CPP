#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"
//#define SafeArraySIZE 100
//extern const int SafeArraySIZE;



class SafeArray : public Array {
private:
//	static const int SafeArraySIZE;
	
	
//	int *pArr_;
//	int size_;
	
public:
	//SafeArray *operator&() { return this; }
	//const SafeArray *operator&() const { return this; }
	
	//SafeArray(); // <--명시적 생성자 있으면 디폴트생성자x
	
	explicit SafeArray(int size = Array::ArraySIZE); // 1. 사이즈넣기
	SafeArray(const int *pArr, int size); 
	SafeArray(const SafeArray& rhs);	
	~SafeArray();
	
	SafeArray& operator = (const SafeArray& arr);
	//+-, -=, *=, /=, %= 배열이라 연산식 안만들어
	bool operator ==(const SafeArray& arr) const; //비교 같다
	bool operator !=(const SafeArray& arr) const; //비교 다르다
	
	virtual int& operator [](int index);
	virtual const int& operator[](int index) const;
	
//	int szie() const;//상수객체const
	
	
};

#endif
