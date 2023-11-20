#include <iostream>

int func(int param1 = 100, int param2 = 200, int param3 = 300)
{
	return param1 + param2 + param3;

}
//이름은 같지만 타입이 다른 함수들
int function(int number1)
{
	return number1;
}

int function(double number1)
{
	return number1;
}

int function(float number1)
{
	return number1;
}

int function(long number1)
{
	return number1;
}


int main()
{
	function(10L);

	int result = func();
	std::cout << result << std::endl;


}

What's your ETA 