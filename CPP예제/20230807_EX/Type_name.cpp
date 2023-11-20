#include <iostream>

auto function() -> int
{
	int result = 10 + 20;
return result;
}


int func(int param1 = 100, int param2 = 200, int param3 = 300)
{
	return param1 + param2 + param3;
}
template<typename T>
T function(T number)
{
	return number;
}

int function(long number)
{
	return number;
}

int main()
{
	long value = 10.0f;
	function(value);
	return 0;
}