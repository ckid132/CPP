#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
//#define ARRAYSIZE 100
//extern const int ARRAYSIZE;
//디폴트, 치환 , 복사, 소멸자, &연산 생성자 자동으로 생김
class Array{
private:
   T *pArr_;
   
protected:
   static const int ARRAYSIZE;
   int size_;
   
public:
   //Array(){}                                                            디폴트 생성자
   //Array(const Array& arr){/*memberwise copy*/}                              복사 생성자
   //~Array                                                                 소멸자
   //Array& operator = (const Array& arr){/*memberwise copy*/ return *this;}      치환연산
   //Array<T> *operator&() {return this;}                                       &연산
   //const Array<T> *operator&() const {return this;}                           연산자 중복
   
   //Array();
   explicit Array(int size = Array<T>::ARRAYSIZE);
   Array(const T *pArr, int size);
   Array(const Array<T>& rhs);
   virtual ~Array();
   
   Array<T>& operator=(const Array<T>& arr);
   
   
   bool operator==(const Array<T>& arr) const;
   bool operator!=(const Array<T>& arr) const;
   
   virtual T& operator[](int index);
   virtual const T&operator[](int index) const;
   int size() const;
   
};
#include <cassert>
template <typename T>
//const int ARRAYSIZE = 100;   //전역변수를 상수화(read only)
const int Array<T>::ARRAYSIZE = 100;

/*Array::Array()
:pArr_(new int[100]),size_(100)   
{
   assert(pArr_);
}*/
template <typename T>
Array<T>::Array(int size)
:pArr_(new T[size]),size_(size)
{
   //this->pArr_ = new int[size];
   assert(pArr_);
   //this->size_ = size;
}
template <typename T>
Array<T>::Array(const T *pArr, int size)
:pArr_(new T[size]),size_(size)
{
   assert(pArr_);
   
   for(int i = 0; i < size; ++i)
   {
      pArr_[i] = pArr[i];
   }
}
template <typename T>
Array<T>::Array(const Array<T>& arr)
:pArr_(new T[arr.size_]),size_(arr.size_)
{
   assert(pArr_);
   
   for(int i = 0; i < arr.size_; ++i)
   {
      pArr_[i] = arr.pArr_[i];
   }
}
template <typename T>
Array<T>::~Array()
{
   delete [] pArr_;
}
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& arr)   //치환연산
{
   delete [] pArr_;
   pArr_ = new T[arr.size_];
   assert(pArr_);
   size_ = arr.size_;
   
   for(int i = 0; i < arr.size_; ++i)
   {
      pArr_[i] = arr.pArr_[i];
   }
   return  *this;
}
template <typename T>
bool Array<T>::operator==(const Array<T>& arr)const
{
   if(size_ != arr.size_)
   {
      return false;
   }
   int i;
   for( i = 0; i < arr.size_; ++i)
   {
      if(pArr_[i] != arr.pArr_[i])
      {
      break;
      }
   }
   return i == arr.size_;
}
template <typename T>
bool Array<T>::operator!=(const Array<T>& arr)const
{
   return !this->operator==(arr);
}
template <typename T>
T& Array<T>::operator[](int index)
{
   return pArr_[index];
}
template <typename T>
const T& Array<T>::operator[](int index)const
{
   return pArr_[index];
}
template <typename T>
int Array<T>::size() const
{
   return size_;
}

#endif
