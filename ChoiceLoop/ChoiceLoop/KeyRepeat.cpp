#include <iostream>
#include <string>
using namespace std;

int main_whiiiildsiiiiide()
{


/*
Ű �ݺ� ����
yŰ�� ������ ��� �ݺ�
nŰ�� ������ �ݺ� �ߴ�
�� �̿��� Ű�� �߸��� �Է�
*/

	string key;

	while (1)
	{

		cout << "��� �ݺ��ұ��?   (Y / N)";
		cin >> key;


		if (key.compare("Y") == 0 || key.compare("y") == 0)
		{

			cout << "��� �ݺ�!\n";

		}
		else if (key.compare("N") == 0 || key.compare("n") == 0)
		{

			cout << "�ݺ� �ߴ�!\n";
			break; //�ݺ��� Ż��
		}
		else
		{
			cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���!\n";

		}

	}










	return 0;
}