#include <iostream>
#include <string>
using namespace std;

int main_hhh()
{
	//정수형 배열 선언
	



	int arr[3] = { 70, 71, 72 };

	cout << size(arr) << endl << endl;

	arr[0] = 92;




	for (int i = 0; i <= 2; i++)
	{
		cout << arr[i] << endl;
	}


	//요소의 합계
	int sum = 0; //합계 구하는 변수


	for (int i = 0; i < size(arr); i++)
	{

		sum += arr[i];
	}


	cout << "합계 : " << sum << endl;


	cout << fixed;
	cout.precision(11);
	cout << "평균 : " << (double)sum / size(arr) << endl;















	return 0;
}