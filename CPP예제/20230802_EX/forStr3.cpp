#include <iostream>

int main()
{
	char name[BUFSIZ]{};
	std::cout << "�����̸� �Է� " << std::endl;
	std::cin.getline(name, BUFSIZ) >> name;
	std::cout << name << std::endl;
	int index = 0;	//�ʱ�ȭ �ϰ�
	while (name[index] != '\0')
	{
		std::cout << name[index] << "\t"; //����
		++index; //Ż���Ҽ��ְ� ����
	}
	std::cout << std::endl;


}