
#include <iostream>
#include "String.h"

int main()
{
	String str1 = String("Hello");
	String str2 = String("Android");
	
	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;

	String str3 = str1 + str2;
	std::cout << str3 << std::endl;
	/*std::cout << "Hello World\n";*/
}
