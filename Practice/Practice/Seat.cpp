#include <iostream>
#include <string>
using namespace std;


int main_ewewewe()
{


	int customer;
	int column;
	int row;

	cout << "���尴 �� �Է� : ";
	cin >> customer;
		

	cout << "�¼� �� �� �Է� : ";
	cin >> column;


	if ( customer % column == 0)
	{
		row = customer / column;

	}
	else
	{
		row = customer / column + 1;

	}
		cout << row << "���� ���� �ʿ��մϴ�." << endl;




	return 0;
}