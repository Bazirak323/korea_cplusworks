#include <iostream>
#include <string>
using namespace std;


/*
���������� Ÿ�� : 1 ~ 3��
*/

int main_switchCase1()
{
	int floor;
	cout << "���� ���� ���� �����ּ���. : ";
	cin >> floor;
	//switch ~ case

	

	switch(floor) // ��ȣ �ȿ��� ����(����)�� �ִ´�
	{
	case 1:
		cout << "1���� �������ϴ�.\n";
		break;
	case 2:
		cout << "2���� �������ϴ�.\n";
		break;
	case 3:
		cout << "3���� �������ϴ�.\n";
		break;
	default:
		cout << "�ǹ��� ���� ���Դϴ�.\n";
		break;

	}

	return 0;
}