#include <iostream>
#include <string>
using namespace std;

int main_score()
{
	/*
	����
	90 ~ 100�� -> 'A'
	80 ~ 90�� -> 'B'
	70 ~ 80�� -> 'C'
	70�� �̸� -> 'F'
	*/

	int score = 2;
	char grade;

	cout << "������ �Է��ϼ���. : ";
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
	cout << "������ " << grade << "�Դϴ�\n";













	return 0;
}