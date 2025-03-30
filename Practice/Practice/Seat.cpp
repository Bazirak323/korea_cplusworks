#include <iostream>
#include <string>
using namespace std;


int main_ewewewe()
{


	int customer;
	int column;
	int row;

	cout << "입장객 수 입력 : ";
	cin >> customer;
		

	cout << "좌석 열 수 입력 : ";
	cin >> column;


	if ( customer % column == 0)
	{
		row = customer / column;

	}
	else
	{
		row = customer / column + 1;

	}
		cout << row << "개의 줄이 필요합니다." << endl;




	return 0;
}