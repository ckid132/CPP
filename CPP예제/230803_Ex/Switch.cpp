#include <iostream>

void showmenu();
void report();
void comfort();


int main()
{
	showmenu();
	int choice;
	std::cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
		case 1: std::cout << "\a \n";
			break;
		case 2: report();
			break;
		case 3: std::cout << "������� ���� ȸ�翡 ��̽��ϴ�. \n";
			break;
		case 4: comfort();
			break;
		default: std::cout << "�װ��� ������ �� �����ϴ�.\n";
		}
	showmenu();
	std::cin >> choice;
	}
	std::cout << "���α׷��� �����մϴ� ! \n";
	return 0;

}

void showmenu()
{
	std::cout << "1, 2, 3, 4, 5�� �߿��� �ϳ��� �����Ͻʽÿ�: \n"
		"1) �����			2) ����\n"
		"3) �Ƹ����� 			4) �ݷ���\n"
		"5) ����\n";
}

void report()
{
	std::cout << "�̹� �б�� �濵 ������ ���� �����ϴ�. \n"
		"�Ǹŷ��� 120% �þ��, ����� 35% �پ����ϴ�. \n";
}

void comfort()
{
	std::cout << "������� ����� ���� �ְ��� CEO��� �����ϰ� �ֽ��ϴ�. \n"
				 "�̻�ȸ�� ����� ���� �ְ��� CEO��� �����ϰ� �ֽ��ϴ�. \n";
}