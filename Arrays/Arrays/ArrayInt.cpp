#include <iostream>
#include <string>
using namespace std;

int main_hhh()
{
	//������ �迭 ����
	



	int arr[3] = { 70, 71, 72 };

	cout << size(arr) << endl << endl;

	arr[0] = 92;




	for (int i = 0; i <= 2; i++)
	{
		cout << arr[i] << endl;
	}


	//����� �հ�
	int sum = 0; //�հ� ���ϴ� ����


	for (int i = 0; i < size(arr); i++)
	{

		sum += arr[i];
	}


	cout << "�հ� : " << sum << endl;


	cout << fixed;
	cout.precision(11);
	cout << "��� : " << (double)sum / size(arr) << endl;















	return 0;
}