#include <iostream>
#include <string>
#include <vector>
using namespace std;
//ī�� �ڵ��߱� ���α׷�
class Card {
private:
	string name;
	int cardNumber;
public:
	Card() {};
	Card(string name, int cardNumber) {
		this->name = name;
		this->cardNumber = cardNumber;
	}
	//Card(string name, int cardNumber) : name(name), cardNumber(cardNumber) {}
	string getName() {return name;}
	int getcardNumber() {return cardNumber;}
};

int main()
{
	/*Card c1("������", 1001);
	Card c2("������", 1002);
	cout << c1.getName() << endl;
	cout << c1.getcardNumber() << endl;	
	cout << c2.getName() << endl;
	cout << c2.getcardNumber() << endl;*/
	//Card c[3] = {
	//	Card("������", 1001), 
	//	Card("����", 1002),
	//	Card("��", 1003)

	//};
	//for (int i = 0; i <= 2; i++)
	//{
	//	cout << c[i].getName() << " / " << c[i].getcardNumber() << endl;
	//}


	//���Ϳ� ��ü ����

	vector<Card> cards;

	cards.push_back(Card("������", 1001));
	cards.push_back(Card("������", 1002));
	cards.push_back(Card("��", 1003));
	for (int i = 0; i < cards.size(); i++)
	{
		cout << cards[i].getName() << endl;
		cout << cards[i].getcardNumber() << endl;
	}


	return 0;
}