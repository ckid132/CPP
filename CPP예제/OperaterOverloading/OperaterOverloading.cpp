//p.712
#include <iostream>
class Time {
    int hour;
    int minute;
public:

    friend Time operator*(int times, const Time& time);
    explicit Time(/*this*/)   //디폴트 형인 생산자
    {
        this->hour = 0;
        this->minute = 0;
        std::cout << "Time() 생성자 호출" << std::endl;
    }
    ~Time()   //소멸자
    {
        std::cout << "Time() 소멸자 호출" << std::endl;   // (void*)this : 주소를 알고 싶을때
    }
    Time(int hour, int minute)
    {
        this->hour = hour;
        this->minute = minute;
        std::cout << "Time(int, int) 생성자 호출" << std::endl;
    }
    void addMinute(int minute)
    {
        this->minute += minute;
        this->hour += static_cast<int>(minute / 60);
        this->minute %= 60;
    }
    void addHour(int hour)
    {
        this->hour += hour;
    }
    void reset(int hour = 0, int minute = 0)
    {
        this->minute = minute;
        this->hour = hour;
    }
    Time sum(const Time& time)const
    {
        Time _time = Time();
        _time.minute = this->minute + time.minute;
        _time.hour = this->hour + time.hour + (int)_time.minute / 60;
        _time.minute %= 60;
        return _time;
    }
    Time operator+(const Time& time)   //연산자 오버로딩-> '+'기호가 main문에서 더하기로 작동함 
    {

        Time _time = Time();
        _time.minute = this->minute + time.minute;
        _time.hour = this->hour + time.hour + (int)_time.minute / 60;
        _time.minute %= 60;
        return _time;
    }
    Time operator-(const Time& time)   //연산자 오버로딩-> '-'기호가 main문에서 빼기로 작동함 
    {

        Time _time = Time();
        _time.minute = this->minute - time.minute;
        _time.hour = this->hour - time.hour - (int)_time.minute / 60;
        _time.minute %= 60;
        return _time;
    }
    Time operator*(double m)
    {

        Time _time = Time();
        long totalMin = this->hour * m * 60 + this->minute * 2;
        _time.hour = totalMin / 60;
        _time.minute = totalMin % 60;
        return _time;
    }
    Time operator/(double m)
    {

        Time _time = Time();
        long totalMin = this->hour / m * 60 + this->minute / 2;
        _time.hour = totalMin / 60;
        _time.minute = totalMin % 60;
        return _time;
    }

    void show() const
    {
        std::cout << this->hour << " 시간 " << this->minute << " 분" << std::endl;
    }
};


Time operator*(int times, Time& time)
{
    return time.operator*(times);
}
int main()
{
    Time time{ Time() };
    Time time1(1, 10);
    Time time2(4, 40);
    time1.addHour(2);
    time1.show();
    //time = time1.sum(time2);          //개발자는 이렇게 만들어야 편함
    //time = time1 + time2;             //사용자는 이렇게 만들어야 편함(가독성 좋음)
    //time = time1.operator+(time2);    //명시적
//    time = time1 + time2;              //연산자 오버로딩, 암시적
//    time.show();
//    time = time1 - time2;              //연산자 오버로딩
//    time.show();
//    time = time2 * 2;
//    time.show();
//    time = time2 / 2;
//    time.show();
    time1.operator*(4);
    4 * time = time1;
    time = 4 * time1;
    time.show();

    time = time1.sum(time2);
    

}