#include <iostream>
#include <string>
using namespace std;


/*
2월 - 28일
*/

int main_switchswitch()
{
	int month = 3;
	int day;

	switch (month)
	{
	case 1: case 3: case 5:  case 7: case 8: case 10: case 12:
		day = 31;
		break;
	case 2:
		day = 28;
		break;
	case 4:case 6:case 9: case 11:
		day = 30;
		break;
	}
	cout << month << "월은 " << day << "일까지 있습니다.";






	return 0;
}