

#include <iostream>

int main()
{
	int numbers1 = 100;
	int numbers2 = 200;
	int numbers3 = 300;
	int* numbers[3] = { &numbers1, &numbers2, &numbers3 };
	*numbers[0];
	*(*(numbers + 0));
	const char* strs[] = {"Hello", "World", "Android"};
	//  {const char*, const char*, const char*}
	// *strs[0] == *(*( strs+0 ) )
	return 0;
}
