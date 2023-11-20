
#include <iostream>



int main()
{
	int ang;
	int min;
	int sec;

	
	
	std::cout << "위도를 도각 분각 초각 단위로 입력하시오" << std::endl;
	
	std::cout << "위도 : "; 
	std::cin >> ang;

	std::cout << "분각 : ";
	std::cin >> min;

	std::cout << "초각 : ";
	std::cin >> sec;

	double lat = ang + (min / 60.0) + (sec / 3600.0);
	
	std::cout << ang <<"도, "<< min << "분,"<< sec << "초 = " <<lat<<"도" << std::endl;


	




	return 0;

}
