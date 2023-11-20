
#include <iostream>

int main()
{
	long sec;
	int day;
	int hour;
	int min;
	int second;

	std::cout << "초 입력 : ";
	std::cin >> sec;

	day = sec / 86400;
	hour = (sec % 86400) / 3600;
	min = (sec % 86400) % 3600 / 60;
	second = (sec % 86400) % 3600 % 60;

	std::cout << sec << "초 : " << day << "일 ," << hour << "시간, " << min << "분 ," << second << "초, " << std::endl;

	


	return 0;

}
