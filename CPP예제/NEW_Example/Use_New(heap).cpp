#include <iostream>


int main()
{
	int nights { 1'001 };
	//type name * pointer name = new typename
	int* ptr_heap1 = new int;
	if (ptr_heap1 == nullptr) {
		return 1;
	}
	*ptr_heap1 = nights;
	std::cout << "PTR_HEAP 1 : " << *ptr_heap1 << std::endl;

	delete ptr_heap1;
	ptr_heap1 = nullptr;


	double* ptr_heap2 = new double;
	if (ptr_heap2 == nullptr) {
		return 1;
	}
	*ptr_heap2 = 1'001.10;
	std::cout << "PTR_HEAP 2 : " << *ptr_heap2 << std::endl;

	delete ptr_heap2;
	ptr_heap2 = nullptr;

	return 0;

}