#include <iostream>

const char* qualify[4] = {
	"������ �޸���",
	"�𷡻��� ����",
	"��ġ �߸�",
	"�θ޶� ������"
};

int main()
{
	std::cout << "���̸� �Է��ϼ��� ";
	int age;
	int index;
	std::cin >> age;

	if (17 < age and age < 35) {
		index = 0;
	}else if(35 <= age and age < 50){
		index = 1;
	}else if(50 <= age and age < 64){
		index = 2;
	}else
		index = 3;
	

	std::cout << qualify[index] << std::endl;
	if (!(index > 5))
		~index; // ~�� not�� , ��Ʈ����

}