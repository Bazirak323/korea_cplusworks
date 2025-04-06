#include <iostream>
#include <string>
#include <vector>
using namespace std;
//카드 자동발급 프로그램
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
	/*Card c1("신유빈", 1001);
	Card c2("이정후", 1002);
	cout << c1.getName() << endl;
	cout << c1.getcardNumber() << endl;	
	cout << c2.getName() << endl;
	cout << c2.getcardNumber() << endl;*/
	//Card c[3] = {
	//	Card("신유빈", 1001), 
	//	Card("신유", 1002),
	//	Card("신", 1003)

	//};
	//for (int i = 0; i <= 2; i++)
	//{
	//	cout << c[i].getName() << " / " << c[i].getcardNumber() << endl;
	//}


	//벡터에 객체 저장

	vector<Card> cards;

	cards.push_back(Card("신유빈", 1001));
	cards.push_back(Card("이정후", 1002));
	cards.push_back(Card("신", 1003));
	for (int i = 0; i < cards.size(); i++)
	{
		cout << cards[i].getName() << endl;
		cout << cards[i].getcardNumber() << endl;
	}


	return 0;
}