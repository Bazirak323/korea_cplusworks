#include <iostream>
using namespace std;

void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;


}
void swapRef(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}						//주소를 저장할 때 사용하는 별
void swapRef2(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;//값에 접근할 때 사용하는 별
	*b = temp;

}

int main()
{

	/*참조 연산자 - 기존의 메모리 공간에 별명을 붙이는 방법으로
		한개의 변수에 여러 개의 이름을 붙이는 연산자다*/

	//int n = 1;
	//int& x = n;

	//cout << n << endl;
	//cout << x << endl;


	//값에 의한 호출



	int x = 10;
	int y = 20;
	swap(x, y);
	cout << "x = " << x << ", y = " << y << endl;


	swapRef(x, y);
	cout << "x = " << x << ", y = " << y << endl;
	
	swapRef2(&x, &y);
	cout << "x = " << x << ", y = " << y << endl;





	return 0;
}