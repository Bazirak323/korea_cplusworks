#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//srand(11);

	srand(time(NULL));




	//���� ������
	int coin = rand() % 2;
	

	//�ո� 0 �޸� 1


	for (int i = 1; i <= 10; i++)
	{
		int dice = rand() % 6 + 1;
		cout << "���� ���� : " << dice;
		cout << "\n\n====================\n\n";
	}

	string carts[] = { "��", "�Ұ��", "�ᳪ��", "Ŀ��" };
	for (int i = 0; i <= 10; i++)
	{
		int cart = rand() % 4;
		cout << "������ ���� : " <<  carts[cart];
		cout << "\n\n========================\n\n";
	}

	return 0;
}