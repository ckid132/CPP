#include <iostream>


const int fave = 27;
int main()
{
	int n;

	std::cout << "1���� 100���� �������� �ϳ��� ���� �˾Ƹ����� �����Դϴ�. \n";
	std::cout << "���� �����ϴ� ���� �����ϱ��? ";
	
	do
	{
		std::cin >> n;
		if (n < fave)
			std::cout << "�װͺ��� Ů�ϴ�. �����ϱ��? ";
		else if (n > fave)
			std::cout << "�װͺ��� �۽��ϴ�. �����ϱ��? ";
		else
			std::cout << "�¾Ҿ��ϴ�. ������ " << fave << "�Դϴ�. \n";
	} while (n != fave);
	return 0;
}
