#include <iostream>
//비트필드 embedded
//임베디드

struct ToggleRegister
{
	unsigned int SN : 4; //4bit -> SN에 해당
	unsigned int : 4; //unused bit

	bool good_in : 1;
	bool good_out : 1;
	
};

enum PINS
{
	LED_1,
	LED_2,
	LED_3,
	LED_4,

	PIR_1,
	PIR_2,
	PIR_3,
	PIR_4,

};

union One4All
{
	int value1;
	int value2;
	double value; //가장큰 메모리기준으로 공간을 만듬 8byte

};

void setup()
{
	pinmode(LED_1, OUTPUT);
	pinmode(LED_2, OUTPUT);

}

int main()
{
	const int LED_5 = 2;

	enum PINS pin = LED_1;
	std::cout << LED_1 << std::endl;


	

	


}