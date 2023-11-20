#include <iostream>


//using namespace std;
// main을 진입점(Entry point)
#include <iostream>

//using namespace std
int main(int argc, const char* argv[])

{
    printf("%d \r\n", argc);
    printf("%s \r\n", argv[0]);
    printf("%s \r\n", argv[1]);
    printf("%s \r\n", argv[2]);

    std::cout << argc << std::endl;
    std::cout << argv[0] << std::endl;
    std::cout << argv[1] << std::endl;
    std::cout << argv[2] << std::endl;

    return 0;
}
//main();
//main(3, ["", "",""]);
// 
// calculate.exe 10 20
// main.exe Hello world !!! 엔터
//0 잘끝남
//1 문제있음