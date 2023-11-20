
#include <iostream>

int main()
{

	long long peo;
	long long kor;


	std::cout << "세계 인구수 입력 : ";
	std::cin >> peo;

	std::cout << "한국 인구수 입력 : ";
	std::cin >> kor;

	double per = (double)kor / peo * 100;

	std::cout << "세계인구에서 한국이 차지하는 비율은 " << per << "% 입니다." << std::endl;
	
	return 0;





}
