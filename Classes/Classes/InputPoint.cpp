#include <iostream>
#include <string>
using namespace std;
//����ü�� ���̤̤����� �ۺ�
struct Point {
	int x, y;

	Point() {}

	Point(int x, int y) : x(x), y(y) {}
	
};

Point inputPoint()
{
	Point p;
	cout << "��ǥ�� �Է����ּ���(x, y) : ";
	cin >> p.x >> p.y;
	return p;
}


void PrintPoint(Point p, const char* str)
{
	cout << str << " = (" << p.x << "," << p.y << ")\n";

}

int main()
{

	/*int n = 1;
	int& x = n;
	int& y = n;

	cout << "x = " << x + 1 << endl;
	cout << "y = " << y + 1 << endl;*/


	Point p1;
	Point p2(3, 4);
	p1 = inputPoint();
	PrintPoint(p1, "�Է� ��");


}