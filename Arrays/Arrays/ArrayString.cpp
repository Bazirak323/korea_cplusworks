#include <iostream>
#include <string>
using namespace std;
int main_zz()
{
	string cart[] = { "���", "��", "ȭ����", "����" };

	cout << cart[1] << endl;


	cout << size(cart) << endl;

	cart[1] = "��";

	


	for (int i = 0; i < size(cart); i++)
	{
		cout << cart[i] << " ";
							//����

	}


	return 0;
}