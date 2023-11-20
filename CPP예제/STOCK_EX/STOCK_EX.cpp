

#include <iostream>
#include "Stock.h"

int main()
{
	Stock(); //만든적없는데 있음 디폴트 생성자 컴파일러가 만들어줌
	class Stock stock = Stock(); 
	stock.acquire("LUX", 1000L, 20000.0);

	stock.show();
	Stock Karl;
	Karl.acquire("SAMSUNG", 10L, 60000);
	Karl.show();

	Stock brain = Stock("LG,", 1000L, 200000);
	Stock yuna("Hyundai", 1000L, 200000);
	
	
	brain.topvalue(/*this*/yuna);
	int value = 100;
	std::cout << 100 << std::endl;

	return 0;


}
