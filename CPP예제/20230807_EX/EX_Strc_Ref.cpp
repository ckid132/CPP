#include <iostream>
#include <string>


struct free_throws
{
	std::string name;
	int made;
	int attempts;
	float percent;

};

void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulatee(free_throws& target, const free_throws& source);



int main()
{
	free_throws one = { "Ifelsa Branch", 13, 14 };
	free_throws two = { "Andor Knott", 10, 16 };
	free_throws three = { "Minnie Max", 7, 9 };
	free_throws four = { "Whily Looper", 5, 9 };
	free_throws five = { "Long Long", 6, 14 };
	free_throws team = { "Throwgoods", 0, 0 };

	free_throws dup;
	set_pc(one);
	display(one);
	accumulatee(team, one);
	display(team);

	display(accumulatee(team, two);
	accumulatee(accumulatee(team, three), four);
	display(team);

	dup = accumulatee(team, five);
	std::cout << "team 출력 : " << std::endl;
	display(team);
	std::cout << "대입 이후 dup 출력 : \n" << std::endl;
	display(dup);
	set_pc(four);

	accumulatee(dup, five) = four;
	std::cout << "문제 소지가 있는 대입 이후 dup 출력 " << std::endl;
	display(dup);

	return 0;
}


void display(const free_throws& ft)
{
	std::cout << "Name : " << ft.name << '\n';
	std::cout << "Made : " << ft.made << '\t';
	std::cout << "Attempts : " << ft.attempts << '\t';
	std::cout << "Percent : " << ft.percent << '\n';

}

void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	else
		ft.percent = 0;

}

free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}
