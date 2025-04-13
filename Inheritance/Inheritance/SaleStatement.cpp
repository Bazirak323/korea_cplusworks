//#include <iostream>
//#include <string>
//using namespace std;
//
//
////매출 전표 작성하기
//
//class Drink {
//protected :
//	string name;
//	int price;
//	int quantity;
//
//public :
//	Drink(string name, int price, int quantity) : 
//		name(name), price(price), quantity(quantity) { }
//
//	//금액 계산(가격 x 수량)
//	int calcPrice() {return price * quantity;}
//	static void printTitle() 
//	{
//		cout << "상품명\t가격\t수량\t금액\n";//제목행
//	}
//	void printData()
//	{ 
//		cout << name << "\t" << price << "\t" << quantity << "\t" << calcPrice() << endl;
//	}
//
//};
//
//
////드링크를 상속받은 알코올 클래스
//class Alcohol : public Drink {	float alcper;
//public : 
//	Alcohol(float alcper, string name, int price, int quantity) :
//		alcper(alcper), Drink(name, price, quantity){ }
//	static void printTitle()
//	{ // 변하지 않는 상수기 때문에 static을 붙인다.
//		cout << "상품명(도수[%])\t가격\t수량\t금액\n";//제목행
//	}
//	void printData()
//	{
//		cout << name << "(" << alcper << ")" << "\t" << price << "\t" << 
//			quantity << "\t" << calcPrice() << endl;
//	}
//};
//
//
//int main()
//{
//
//
//	Drink coffee("커피", 2500, 4);
//	Drink tea("녹차", 3000, 3);
//
//
//	cout << "==============매출전표=============\n";
//
//	Drink::printTitle();
//	coffee.printData();
//	tea.printData();
//
//	Alcohol trash(15.1f, "소주", 4000, 2);
//	Alcohol::printTitle(); //static 함수이므로 클래스 이름으로 직접 접근함
//	trash.printData();
//	int total;
//	total = coffee.calcPrice() + tea.calcPrice() + trash.calcPrice();
//	cout << "\n**************하루 매출*****************\n" << total << "원";
//
//
//
//
//	return 0;
//}