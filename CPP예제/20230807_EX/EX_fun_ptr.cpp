#include <iostream>

double gildong(int);

double moonsoo(int);

void estimate(int lines, double (*pt)(int));


int main()
{
	int code;
	std::cout << "필요한 코드의 행 수를 입력하시오 : ";
	std::cin >> code;
	std::cout << "홍길동의 시간 예상 : \n";
	estimate(code, gildong);

	std::cout << "박문수의 시간 예상 : \n";
	estimate(code, moonsoo);


	return 0;

}


double gildong(int lns)
{
	return 0.05 * lns;
}

double moonsoo(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pt)(int))
{
	std::cout << lines << "행을 작성하는 데 \n";
	std::cout << (*pt)(lines) << "시간이 걸립니다. \n";
}