#include <iostream>
#include <fstream>
#include <string>
int main()
{
	std::ofstream outFile;
	outFile.open("fish.txt",std::ios_base::app);
	std::cout << "최대값 입력 : ";
	int MAX = 0;
	std::cin >> MAX;
	int i = 0;
	int* ptr_fish{ new int[MAX] };
	std::cout << "무게 입력 : ";
	while (i < MAX and std::cin >> ptr_fish[i])
	{
		++i;
		std::cout << i << " 번째 물고기" << std::endl;
		
	}
			int sum = 0;
			for (int i = 0; i < MAX; ++i) 
			{
				sum += ptr_fish[i];
				int value = ptr_fish[i];
				std::cout << value << std::endl;
				outFile << std::to_string(value) << "\t";

			}
		
		std::cout << "총합 : " << sum << "  평균 : " << (double)sum / MAX << std::endl;

		/*std::ofstream outFile();
		outFile.open("fish.txt");
		outFile*/


		delete[] ptr_fish;
		ptr_fish = nullptr;
		outFile.close();
}
