#include <iostream>
#include <string>
using namespace std;

int main_whiiiildsiiiiide()
{


/*
키 반복 동작
y키를 누르면 계속 반복
n키를 누르면 반복 중단
그 이외의 키는 잘못된 입력
*/

	string key;

	while (1)
	{

		cout << "계속 반복할까요?   (Y / N)";
		cin >> key;


		if (key.compare("Y") == 0 || key.compare("y") == 0)
		{

			cout << "계속 반복!\n";

		}
		else if (key.compare("N") == 0 || key.compare("n") == 0)
		{

			cout << "반복 중단!\n";
			break; //반복문 탈출
		}
		else
		{
			cout << "잘못된 입력입니다. 다시 입력하세요!\n";

		}

	}










	return 0;
}