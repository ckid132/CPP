
#include <iostream>



int main()
{
	int ang;
	int min;
	int sec;

	
	
	std::cout << "������ ���� �а� �ʰ� ������ �Է��Ͻÿ�" << std::endl;
	
	std::cout << "���� : "; 
	std::cin >> ang;

	std::cout << "�а� : ";
	std::cin >> min;

	std::cout << "�ʰ� : ";
	std::cin >> sec;

	double lat = ang + (min / 60.0) + (sec / 3600.0);
	
	std::cout << ang <<"��, "<< min << "��,"<< sec << "�� = " <<lat<<"��" << std::endl;


	




	return 0;

}
