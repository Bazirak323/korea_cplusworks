#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number[] = {1, 2, 3, 4, 5, 9, 101, 2000, 3, 50, 600, 41241, 0, -1, -2222}; //���� ���� �� ���ϱ�

	int max = number[0];

	for (int i = 0; i < size(number);i++)
	{
		if (number[i] > max)
		{
			max = number[i];
		}

	}
	cout << "�ִ밪 : " << max << endl;

	int min = number[0];
	for (int i = 0; i < size(number);i++)
	{
		if (number[i] < min)
		{
			min = number[i];
		}

	}

	cout << "�ּڰ� : " << min << endl;
	return 0;
}