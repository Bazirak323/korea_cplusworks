//#include <iostream>
//#include <string>
//using namespace std;
// 
//class Animal
//{
//public :
//	void breathe()
//	{
//		cout << "동물이 숨을 쉽니다.\n";
//
//	}
//	//가상 함수 - 구현 내용이 없고 상속받은 함수에서 모조르 사용해야 한다.
//	virtual void cry(){}
//};
//class Cat : public Animal
//{
//public :
//	void cry()
//	{
//		cout << "고양이는 냐옹\n";
//
//	}
//
//
// };
//class Dog : public Animal
//{
//public :
//	void cry()
//	{
//		cout << "강아지는 멍멍\n";
//	}
//	
//};
//
//
//int main()
//{
//
//	//Cat cat1;
//	//cat1.breathe();
//	//cat1.cry();
//	//Dog dog;
//	//dog.breathe();
//	//dog.cry();
//
//	//동적 객체 생성 - 포인터 사용
//	//프로그램 실행중에 생성되고 사용 후 소멸됨
//
//
//	Animal* cat = new Cat;
//	Animal* dog = new Dog;    //왼쪽이 부모여도 괜찮
//
//	cat->breathe();
//	cat->cry();
//	dog->breathe();
//	dog->cry();
//
//	Cat* cat2 = new Cat;		//자기 자신으로 해도 괜찮
//	cat2->breathe();
//
//
//	delete cat;
//	delete dog;
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}