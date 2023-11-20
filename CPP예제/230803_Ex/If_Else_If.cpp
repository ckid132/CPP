#include <iostream>


const int fave = 27;
int main()
{
	int n;

	std::cout << "1부터 100까지 범위에서 하나의 수를 알아맞히는 게임입니다. \n";
	std::cout << "내가 좋아하는 수는 무엇일까요? ";
	
	do
	{
		std::cin >> n;
		if (n < fave)
			std::cout << "그것보단 큽니다. 무엇일까요? ";
		else if (n > fave)
			std::cout << "그것보단 작습니다. 무엇일까요? ";
		else
			std::cout << "맞았씁니다. 정답은 " << fave << "입니다. \n";
	} while (n != fave);
	return 0;
}
