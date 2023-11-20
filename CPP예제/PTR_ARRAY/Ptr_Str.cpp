

#include <iostream>

int main()
{
	const char* rose = "Rose"; // R o s e \0	(5)
	char flower[10] = "Rose";   // R o s e \0	(5) 

	char* ptr_heap = new char[10];
	if (!ptr_heap) {
		std::cout << "메모리 부족" << std::endl;
		return 0;
	}
	for (int i = 0; i < sizeof flower / sizeof flower[0]; i++) {
		ptr_heap[i] = flower[i];
	}
	std::cout<< ptr_heap << std::endl;
	delete[] ptr_heap; // delete할때 배열이라 [] 같이

	


}
