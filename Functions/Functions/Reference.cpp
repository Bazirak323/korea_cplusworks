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

}						//�ּҸ� ������ �� ����ϴ� ��
void swapRef2(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;//���� ������ �� ����ϴ� ��
	*b = temp;

}

int main()
{

	/*���� ������ - ������ �޸� ������ ������ ���̴� �������
		�Ѱ��� ������ ���� ���� �̸��� ���̴� �����ڴ�*/

	//int n = 1;
	//int& x = n;

	//cout << n << endl;
	//cout << x << endl;


	//���� ���� ȣ��



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