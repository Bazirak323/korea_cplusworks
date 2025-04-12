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
//	//생성자 : 초기화 목록
//	Bus(int busNumber) : passenger(0), money(0) 
//	{
//		this->busNumber = busNumber;
//	}
//	//승객을 태우는 함수
//	void take(int money)
//	{
//		this->money += money; // 다음 사람의 돈을 추가한다.(수입 누적
//		passenger++; // 승객 증가
//	}
//	//버스 정보
//	void busInfo()
//	{
//		cout << busNumber << "번 버스의 수입은 " << money << "원 이고 승객 수는 "
//			<< passenger << "명 입니다." << endl;
//	};
//
//};
//
//class Person {
//private : 
//	string name; // 이름
//	int money; // 가진 돈
//public :
//	Person(string name, int money) : name(name), money(money){}
//
//	//교통 수단 탑승
//	void takeBus(Bus& bus, int fee) {
//		bus.take(fee);
//		this->money -= fee; // 요금 만큼 줄어들어야 함으로
//
//	}
//
//	void personInfo() {
//		cout << name << "님의 남은 돈은 " << money << "원 입니다." << endl;
//
//	}
//};
//
//
//
//int main()
//{
//
//	Person p1("신유빈", 10000); //승객 생성
//
//	Person p2("이정후", 20000);
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
