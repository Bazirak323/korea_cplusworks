#include <iostream>
#include <string>
using namespace std;


/*
엘리베이터 타기 : 1 ~ 3층
*/

int main_switchCase1()
{
	int floor;
	cout << "가고 싶은 층을 눌러주세요. : ";
	cin >> floor;
	//switch ~ case

	

	switch(floor) // 괄호 안에는 조건(변수)를 넣는다
	{
	case 1:
		cout << "1층을 눌렀습니다.\n";
		break;
	case 2:
		cout << "2층을 눌렀습니다.\n";
		break;
	case 3:
		cout << "3층을 눌렀습니다.\n";
		break;
	default:
		cout << "건물에 없는 층입니다.\n";
		break;

	}

	return 0;
}