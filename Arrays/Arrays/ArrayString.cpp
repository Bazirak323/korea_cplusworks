#include <iostream>
using namespace std;
#include <string>
int main()
{
	string cart[] = { "���", "��", "ȭ����", "����" };

	cout << cart[0] << endl;


	cout << size(cart) << endl;


	for (int i = 0; i < size(cart); i++)
	{
		cout << cart[i] << " ";
							//����

	}


	return 0;
}