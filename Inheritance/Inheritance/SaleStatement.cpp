//#include <iostream>
//#include <string>
//using namespace std;
//
//
////���� ��ǥ �ۼ��ϱ�
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
//	//�ݾ� ���(���� x ����)
//	int calcPrice() {return price * quantity;}
//	static void printTitle() 
//	{
//		cout << "��ǰ��\t����\t����\t�ݾ�\n";//������
//	}
//	void printData()
//	{ 
//		cout << name << "\t" << price << "\t" << quantity << "\t" << calcPrice() << endl;
//	}
//
//};
//
//
////�帵ũ�� ��ӹ��� ���ڿ� Ŭ����
//class Alcohol : public Drink {	float alcper;
//public : 
//	Alcohol(float alcper, string name, int price, int quantity) :
//		alcper(alcper), Drink(name, price, quantity){ }
//	static void printTitle()
//	{ // ������ �ʴ� ����� ������ static�� ���δ�.
//		cout << "��ǰ��(����[%])\t����\t����\t�ݾ�\n";//������
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
//	Drink coffee("Ŀ��", 2500, 4);
//	Drink tea("����", 3000, 3);
//
//
//	cout << "==============������ǥ=============\n";
//
//	Drink::printTitle();
//	coffee.printData();
//	tea.printData();
//
//	Alcohol trash(15.1f, "����", 4000, 2);
//	Alcohol::printTitle(); //static �Լ��̹Ƿ� Ŭ���� �̸����� ���� ������
//	trash.printData();
//	int total;
//	total = coffee.calcPrice() + tea.calcPrice() + trash.calcPrice();
//	cout << "\n**************�Ϸ� ����*****************\n" << total << "��";
//
//
//
//
//	return 0;
//}