#include <iostream>
#include <fstream>
#include <string>
int main()
{
	std::ofstream outFile;
	outFile.open("fish.txt",std::ios_base::app);
	std::cout << "�ִ밪 �Է� : ";
	int MAX = 0;
	std::cin >> MAX;
	int i = 0;
	int* ptr_fish{ new int[MAX] };
	std::cout << "���� �Է� : ";
	while (i < MAX and std::cin >> ptr_fish[i])
	{
		++i;
		std::cout << i << " ��° �����" << std::endl;
		
	}
			int sum = 0;
			for (int i = 0; i < MAX; ++i) 
			{
				sum += ptr_fish[i];
				int value = ptr_fish[i];
				std::cout << value << std::endl;
				outFile << std::to_string(value) << "\t";

			}
		
		std::cout << "���� : " << sum << "  ��� : " << (double)sum / MAX << std::endl;

		/*std::ofstream outFile();
		outFile.open("fish.txt");
		outFile*/


		delete[] ptr_fish;
		ptr_fish = nullptr;
		outFile.close();
}
