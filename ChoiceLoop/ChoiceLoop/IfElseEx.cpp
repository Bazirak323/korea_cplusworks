#include <iostream>
#include <string>
using namespace std;

int main_ifelseEx()
{
	int n1 = 10;
	int n2 = 11;

	if (n1 == n2)
	{

		cout << "�� ���� �����ϴ�.\n";


	}
	else
	{
		cout << "�� ���� ���� �ʽ��ϴ�.\n";
	}

	//���� �񱳹� -compare()�Լ� ���

	string str1 = "orange";
	string str2 = "orangeeeeeeeeeeeeeeeeeeeeeeee";


	if (str1.compare(str2) == 0)
	{

		cout << "�� �ܾ�� ��ġ�մϴ�.\n";
		cout << str1.compare(str2) << endl;

	}
	else
	{

		cout << "�� �ܾ�� ��ġ���� �ʽ��ϴ�.\n";
		cout << str1.compare(str2) << "\n";

	}












	return 0;
}