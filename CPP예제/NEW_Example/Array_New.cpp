#include <iostream>


int main()
{
	double * ptr_heap = new double[3]; // 8*3 = 24 byte가능?
	if (ptr_heap == nullptr) {
		std::cout << "메모리 부족" << std::endl;
		return 1;
	}
	ptr_heap[0] = 0.2;
	ptr_heap[1] = 0.5;
	ptr_heap[2] = 0.8;
	std::cout << ptr_heap[0] << std::endl;
	std::cout << ptr_heap[1] << std::endl;
	std::cout << ptr_heap[2] << std::endl;

	delete[] ptr_heap;
	ptr_heap = nullptr;





}