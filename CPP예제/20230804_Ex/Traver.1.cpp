#include <iostream>

typedef struct TravelTime {
	int hour;
	int minute;

}Travel_Time;

struct TravelTime sum(const struct TravelTime* time1, const struct TravelTime* time2)
{
	struct  TravelTime _time;
	_time.hour = time1->hour + time2->hour;
	_time.minute = time1->minute + time2->minute;
	return _time;
}



Travel_Time sum2(Travel_Time time1, Travel_Time time2){
	Travel_Time _time;
	_time.hour = time1.hour + time2.hour;
	_time.minute = time1.minute + time2.minute;
	return _time;
}


int main()
{

	Travel_Time time1{ 10, 5 };
	Travel_Time time2{ 5 ,50 };
	Travel_Time result = sum(&time1, &time2);

	//Travel_Time sum(time1, time2);
	//Travel_Time sum2(time2, time1);

	std::cout << result.hour << "\t" << result.minute << std::endl;
	
	return 0;



}