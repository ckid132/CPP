

#include <iostream>

struct Inflat
{
	char str_buffer[BUFSIZ];	//512
	float volume;		//4
	double price;		//8		-> total 524byte

};




int main()
{	
	Inflat inflat;
	std::cout << sizeof inflat << std::endl;
	Inflat * ptr_inflat = new Inflat;
	
	std::cout << "글자를 입력 : ";

	char temporary[BUFSIZ]{};
	std::cin.getline(temporary, BUFSIZ);
	strcpy_s(ptr_inflat->str_buffer, BUFSIZ, temporary);

	float temp_volum = 0.0f;
	std::cout << "볼륨입력 : ";
	std::cin >> temp_volum;
	ptr_inflat->volume = temp_volum;

	double temp_price = 0.0;
	std::cout << "가격입력 : ";
	std::cin >> temp_price;
	ptr_inflat->price = temp_price;



	//strcpy_s(ptr_inflat->str_buffer, BUFSIZ, "Karl");  //ptr_inflat->name = "Karl";		// 변수 ->    (*변수).@@@
	//ptr_inflat->volume = 30.3f;
	//ptr_inflat->price = 300.20;


	std::cout << ptr_inflat->str_buffer << std::endl;
	std::cout << ptr_inflat->volume << std::endl;
	std::cout << ptr_inflat->price << std::endl;





	delete ptr_inflat;

}
