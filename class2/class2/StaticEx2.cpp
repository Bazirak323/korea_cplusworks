//#include <iostream>
//#include <string>
//using namespace std;
//
//class Card {
//private:
//	string name;
//	int cardNumber;
//	static int serialNum;
//	//���ع�ȣ(���� ����)
//public:
//	Card(string name) {
//		
//		this->name = name;
//		cardNumber = serialNum;
//		serialNum++;
//	}
//	//Card(string name, int cardNumber) : name(name), cardNumber(++serialNum) {}
//	string getName() { return name; }						//������(��++�̸� ������)
//	int getcardNumber() { return cardNumber; }
//};
//
//int Card::serialNum = 1000;
//
//int main()
//{
//	Card c1("������");
//	Card c2("������");
//	Card c3("������");
//	cout << c1.getName() << endl;
//	cout << c1.getcardNumber() << endl;
//	cout << c2.getName() << endl;
//	cout << c2.getcardNumber() << endl;
//	cout << c3.getName() << endl;
//	cout << c3.getcardNumber() << endl;
//
//
//
//
//	return 0;
//}