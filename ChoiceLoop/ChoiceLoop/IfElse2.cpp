#include <iostream>
#include <string>
using namespace std;

int main_score()
{
	/*
	점수
	90 ~ 100점 -> 'A'
	80 ~ 90점 -> 'B'
	70 ~ 80점 -> 'C'
	70점 미만 -> 'F'
	*/

	int score = 2;
	char grade;

	cout << "점수를 입력하세요. : ";
	cin >> score;
	if (score >= 90 && score <= 100)
	{
		grade = 'A';

	}
	else if (score >= 80)
	{
		grade = 'B';

	}
	else if (score >= 70)
	{
		grade = 'C';

	}
	else
	{
		grade = 'F';

	}
	cout << "학점은 " << grade << "입니다\n";













	return 0;
}