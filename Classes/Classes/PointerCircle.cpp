#include <iostream>
#define M_PI 3.1415
using namespace std;

class Point {
private :	
	int x;
	int y;
public :

	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
};

class Circle {
private:
	Point center; //중심점(point 사용)
	int radius;
public:
	//Circle(int x, int y, int radius) : center(x, y), radius(radius) {}
	Circle(int x, int y, int radius)
	{
		this->center.setX(x);
		this->center.setY(y);
		this->radius = radius;

	}
	void showInfo()
	{
		cout << "원의 중심은 " << center.getX() << "," << center.getY() << "이며 반지름은 "
			<< radius << "입니다.\n";
	}

	//원의 넓이

	double getArea() {
		return M_PI * radius * radius;
	}
};





int main_circle()
{

	Circle c1(2, 3, 5);
	c1.showInfo();

	cout << "원의 넓이는 " << c1.getArea() << " 입니다." << endl;




	return 0;
}