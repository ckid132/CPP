
#include <iostream>

int main()
{
	int updates = 6;
	int* p_updates;
	
	p_updates = &updates;
	
	//���� �ΰ��� ������� ǥ��
	std::cout << "�� : updates = " << updates;
	std::cout << ", *p_updates = " << p_updates << std::endl;

	//�ּҸ� �ΰ��� ������� ǥ��
	std::cout << "�ּ� : &updates = " << &updates;
	std::cout << ", p_updates = " << p_updates << std::endl;

	//�����͸� ����Ͽ� ���� ����
	*p_updates = *p_updates + 1;
	std::cout << "�ּ� : &updates = " << &updates;
	std::cout << ", p_updates = " << p_updates << std::endl;
}

