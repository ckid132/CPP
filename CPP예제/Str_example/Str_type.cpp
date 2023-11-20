
#include <iostream>
#include <string>

int main()
{
	std::string s1 = "penguin";
	std::string s2, s3;

	std::cout << "string 객체를 string 객체에 대입할 수 있다: s2 = s1 \n";
	s2 = s1;
	std::cout << "string 객체에 C스타일 문자열을 대입할 수 있다.\n";
	std::cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	std::cout << "s2: " << s3 << std::endl;
	std::cout << "string 객체들을 결합할 수 있다: s3 = s1 +s2 \n";
	s3 = s1 + s2;
	std::cout << "s3: " << std::endl;
	std::cout << "stromg 객체들을 추가할 수 있다.\n";
	s1 += s2;
	std::cout << "s1 += s2 -->> s1 = " << s1 << std::endl;
	s2 += "for a day";
	std::cout << "s2 += \" for a day\" --> s2 =" << s2 << std::endl;

	return 0;
}
