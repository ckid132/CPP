
#include <iostream>
#include <climits> // 각 자료형 한계를 보여주는 헤더파일

//O.O.P -> object Oriented Programming
int main()
{
	int chest = 42; // 10진수
	int waist = 0x42; //16진수 -> 0100 0010
	int waist2 = 0b01000010;
	int inseam = 042; // octa 
}

/*
	short dohee = SHRT_MAX;
	std::cout << dohee << std::endl  //00000001
	dohee = dohee + 1;

	std::cout << dohee << std::endl; //10000000 -> 음수가됨


//사용자 위주
	// keyword => var
	// var java, js, kotlin, swift, Csharp
auto value_value = 10UL;




const uint8_t LED_PIN{ 30U }; // 아두이노 핀
int n_value = INT_MIN;
//int n_value = INT_MAX;
int value_a = 10; //<< 메모리 아까움
//char value_c = (char)10; // << 메모리 아끼기위해 cast연산자를씀 지금은 X
			//명확한 표현 
char value_b = static_cast<char>(10); // C++ 스타일


std::cout << n_value << std::endl;

//자릿값이 큰값(정수) 부동소수X
long long n_llong = LLONG_MAX; //
long n_long = 100L; // == (long)100;

std::cout << n_llong << std::endl;

std::cout << sizeof(n_llong) << std::endl;   // sizeof 에서 ( ) 함수 X 
//long long 64bit (8byte)
std::cout << sizeof(n_long) << std::endl;
//long 32bit (4byte)

//p80
int wrens(400);
int wrens2{ 200 }; // << 선호하는 자료형 표현
int wrens3 = int{ 300 };


//int value_a = int(10); // C++객체 기본형데이터
//int valueOfHuman{ 10 }; //java스타일
//int value_human{ 10 }; //snake스타일
//const int POODLE{ 100 }; 


//int value_b{ 10 }; //객체화 하겠다
//nt value[] = { 0 }; // 클래스데이터, 복합데이터
//integer namas = integer(10);
//Integer value_a = Interger(10);

*/
