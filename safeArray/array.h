#ifndef ARRAY_H
#define ARRAY_H
//#define ARRAYSIZE 100
//extern const int ARRAYSIZE;
//


class Array{
private:
	//static const int ARRAYSIZE;
	int *pArr_;
	//int size_;
protected:
static const int ARRAYSIZE;
int size_;
public:
	//Array *operator&() { return this; }
	//const Array *operator&() const { return this; }
	
	//Array(); // <--명시적 생성자 있으면 디폴트생성자x
	explicit Array(int size = Array::ARRAYSIZE);
	//Array(int size); // 1. 사이즈넣기
	Array(const int *pArr, int size); 
	Array(const Array& rhs);	
	virtual ~Array(); //가상함수 사용하면 소멸자까지 붙여줘야한다 
	
	Array& operator = (const Array& arr);
	//+-, -=, *=, /=, %= 배열이라 연산식 안만들어
	bool operator ==(const Array& arr) const; //비교 같다
	bool operator !=(const Array& arr) const; //비교 다르다
	
	virtual int& operator [](int index);
	virtual const int& operator[](int index) const;
	
	int szie() const;//상수객체const
	
	
};

#endif
