#include <iostream>
using namespace std;
#include <string>
class Dog
{
public:
	string type;
	int age;
	//생성자, 멤버 함수는 선언부와 구현부로 분리 가능하다.

	Dog()
	{cout << " 객체를 생성합니다.\n";}; // 기본 생성자 - 생략해도 컴파일러가 자동으로 생성함

	Dog(string t, int a)
	{
		type = t;
		age = a;
	}

	void bark();
	void doginfo();

};

void Dog::doginfo()
{
	cout << "강아지 종류 : " << type << endl;
	cout << "강아지 나이 : " << age << "세" << endl;


}

void Dog::bark()
{
	cout << "멍멍" << endl;

}

int main_tainc()
{


	/*
	Dog dog1("푸들", 3);
	dog1.doginfo();
	dog1.bark();
	Dog dog2("진돗개", 3);
	dog2.doginfo();
	dog2.bark();
	*/
	Dog dog[3] = {
		Dog("푸들", 3),
		Dog("시바", 5),
		Dog("진돗개", 2)
		//이때는 클래스

	};
	for (int i = 0; i < 3; i++)
	{	//이때는 인스턴스
		dog[i].doginfo();
		cout << ("\n=======================================\n\n");
	}






	return 0;

}