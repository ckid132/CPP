#include <iostream>

//C++ 구조체나 클래스나 다 같음
//이름 지을때 C#과 동일한 스타일
//이름 지을때 대문자로 시작




struct BookCard 
{
    std::string book_name;
    std::string data;
    std::string borrower;


};

void show_book_name()
{
    std::cout << book_name << std::endl;


}

void show_funnc()
{




}



int main()
{
    struct BookCard cabinets[2];
    cabinets[0].book_name = "C++";
    cabinets[0].data = "2023-07-31";
    cabinets[0].borrower = "Karl";
    

    cabinets[1].book_name = "C#";
    cabinets[1].data = "2023-07-30";
    cabinets[1].borrower = "Brian";

    cabinets[2].book_name = "JAVA";
    cabinets[2].data = "2023-07-29";
    cabinets[2].borrower = "Yuna";


    std::cout << cabinets[0].book_name << std::endl;
    std::cout << cabinets[0].data << std::endl;
    std::cout << cabinets[0].borrower << std::endl;




}