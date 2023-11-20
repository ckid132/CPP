

#include <iostream>

int main()
{
	char str_buffer[BUFSIZ]{}; // 512 => 512 byte

	std::cout << "한문장을 입력 : ";
	
	std::cin.getline(str_buffer, BUFSIZ);

	//std::cout << str_buffer << std::endl;

	char* ptr_str{ new char[BUFSIZ] }; // 512 byte heap만들어짐
	if (!ptr_str) {
		std::cout << "메모리가 부족하다 !";

		return 1;
	}
	//for (int i = 0; i < BUFSIZ; ++i) {
	//	*(ptr_str + i) = str_buffer[i];

	//}

	strcpy_s(ptr_str, BUFSIZ, str_buffer); // heap에서 복사

	std::cout << ptr_str << std::endl;

	
	delete[] ptr_str; //heap메모리 해제
	ptr_str = nullptr;
	

}
