#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[5] = { 2, 3, 5, 7, 9 };
	int sum = 0;
	double avg = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];

	}

	cout << "�հ� : " << sum << endl;
	avg = (double)sum / size(arr);
	cout << "��� : " << avg << endl;

	return 0;
}