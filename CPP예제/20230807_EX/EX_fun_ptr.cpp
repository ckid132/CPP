#include <iostream>

double gildong(int);

double moonsoo(int);

void estimate(int lines, double (*pt)(int));


int main()
{
	int code;
	std::cout << "�ʿ��� �ڵ��� �� ���� �Է��Ͻÿ� : ";
	std::cin >> code;
	std::cout << "ȫ�浿�� �ð� ���� : \n";
	estimate(code, gildong);

	std::cout << "�ڹ����� �ð� ���� : \n";
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
	std::cout << lines << "���� �ۼ��ϴ� �� \n";
	std::cout << (*pt)(lines) << "�ð��� �ɸ��ϴ�. \n";
}