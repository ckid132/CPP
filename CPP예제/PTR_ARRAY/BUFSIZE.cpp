

#include <iostream>

int main()
{
	char str_buffer[BUFSIZ]{}; // 512 => 512 byte

	std::cout << "�ѹ����� �Է� : ";
	
	std::cin.getline(str_buffer, BUFSIZ);

	//std::cout << str_buffer << std::endl;

	char* ptr_str{ new char[BUFSIZ] }; // 512 byte heap�������
	if (!ptr_str) {
		std::cout << "�޸𸮰� �����ϴ� !";

		return 1;
	}
	//for (int i = 0; i < BUFSIZ; ++i) {
	//	*(ptr_str + i) = str_buffer[i];

	//}

	strcpy_s(ptr_str, BUFSIZ, str_buffer); // heap���� ����

	std::cout << ptr_str << std::endl;

	
	delete[] ptr_str; //heap�޸� ����
	ptr_str = nullptr;
	

}
