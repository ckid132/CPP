
#include <iostream>


int(*ptr_get)() = nullptr;
void(*ptr_set)(int) = nullptr;

/*int value;
double money;*/ //data

struct MyData
{
	int value;
	double money; //data
	

	ptr_get = get_value;
	ptr_set = set_value;


};

class Class_Data
{
	int value;

public :
	int get_value()
	{
		(*this).value;
		return value;
	}

	void set_value(int _value)
	{
		value = _value;
	}
};

int get_value()
{
	MyData data;
	return data.value;
}
void set_value(int _value)
{
	MyData data;
	data.value = _value;
}


int get_money()
{
	return money;
}
void set_money(double _money)
{
	money = _money;
}

int main()
{

	int value = 10;
	class Class_Data data;


	MyData data;
	data.ptr_get();
	data.ptr_set(100);
	return 0;


}
