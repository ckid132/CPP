#include <iostream>

struct FreeThrows
{
	std::string name;

	int made;
	int attempt;
	float percent;
};

void display(const FreeThrows&);
void set_pc(FreeThrows);

FreeThrows& accumulate(FreeThrows&, const FreeThrows&);
FreeThrows* accumulate(const FreeThrows&);


int main()
{
	FreeThrows free1{ "Brian", 10, 2, 90 };
	FreeThrows free2 = free1;

	display(free1);
	FreeThrows temp = accumulate(free1, free2);
	std::cout << temp.name << std::endl;

	//FreeThrows* ptr = accumulate(free1);
	//std::cout << ptr->name << std::endl;
	//ptr = nullptr; //참조를 하게되면 오류메시지를 안줌 

}

void display(const FreeThrows& ref)
{
	std::cout << "Name : " << ref.name << std::endl;
	std::cout << "Made : " << ref.made << std::endl;
	std::cout << "Attempt : " << ref.attempt << std::endl;
	std::cout << "Percent : " << ref.percent << std::endl;
	/*ref.made = 20;*/

}

FreeThrows& accumulate(FreeThrows& ref1, const FreeThrows& ref2)
{
	FreeThrows temporary;
	temporary.name = ref2.name;
	temporary.made = ref2.made;
	temporary.attempt = ref2.attempt;
	temporary.percent = ref2.percent;

	return temporary;
}

FreeThrows* accumulate(const FreeThrows& ref2)
{
	FreeThrows* temporary = nullptr;
	temporary->name = ref2.name;
	temporary->made = ref2.made;
	temporary->attempt = ref2.attempt;
	temporary->percent = ref2.percent;

	return temporary;
}