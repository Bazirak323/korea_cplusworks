//#include <iostream>
//#include <string>
//using namespace std;
//
//class Bus {
//private :
//	int busNumber;
//	int passenger;
//	int money;
//public :
//	//������ : �ʱ�ȭ ���
//	Bus(int busNumber) : passenger(0), money(0) 
//	{
//		this->busNumber = busNumber;
//	}
//	//�°��� �¿�� �Լ�
//	void take(int money)
//	{
//		this->money += money; // ���� ����� ���� �߰��Ѵ�.(���� ����
//		passenger++; // �°� ����
//	}
//	//���� ����
//	void busInfo()
//	{
//		cout << busNumber << "�� ������ ������ " << money << "�� �̰� �°� ���� "
//			<< passenger << "�� �Դϴ�." << endl;
//	};
//
//};
//
//class Person {
//private : 
//	string name; // �̸�
//	int money; // ���� ��
//public :
//	Person(string name, int money) : name(name), money(money){}
//
//	//���� ���� ž��
//	void takeBus(Bus& bus, int fee) {
//		bus.take(fee);
//		this->money -= fee; // ��� ��ŭ �پ���� ������
//
//	}
//
//	void personInfo() {
//		cout << name << "���� ���� ���� " << money << "�� �Դϴ�." << endl;
//
//	}
//};
//
//
//
//int main()
//{
//
//	Person p1("������", 10000); //�°� ����
//
//	Person p2("������", 20000);
//
//	Bus bus103(103);
//
//	int feeOFBus = 1500;
//
//	p1.takeBus(bus103, feeOFBus);
//	
//	p1.personInfo();
//
//	bus103.busInfo();
//
//
//	p2.takeBus(bus103, feeOFBus);
//
//
//	
//	p2.personInfo();
//	bus103.busInfo();
//
//
//	return 0;
//}
