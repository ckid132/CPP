
#include <iostream>
#include <string>
#include <cstring>


int main()
{
	char charr[20];
	std::string str;
	
	std::cout << "�Է� ������ charr�� �ִ� ���ڿ��� ����:"
			<< strlen(charr) << std::endl;
	std::cout << "�Է� ������ str�� �ִ� ���ڿ��� ���� : "
			<< str.size() << std::endl;
	std::cout << "�ؽ�Ʈ �� ���� �Է��Ͻÿ� : \n";
	std::cin.getline(charr, 20);	//�ִ� ���̸� ��Ÿ����
	std::cout << "�Է��� �ؽ�Ʈ : " << charr << std::endl;
	std::cout << "�� �ٸ� �ؽ�Ʈ �� ���� �Է��Ͻÿ� : ";
	getline(stdcin, str); // ���� cin�� ���� �����ڰ� �ƴ϶� �Ű�����
	std::cout << "�Է��� �ؽ�Ʈ" << str << std::endl;
	std::cout << "�Է� ��"


			

	return 0;
}
