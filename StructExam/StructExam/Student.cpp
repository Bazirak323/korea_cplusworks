#include <iostream>
using namespace std;
#include <string>



//구조체 - 여러가지 자료형을 그룹화 함
struct Student {
	string name;		//이름
	int grade;			//학년
	string address;		//주소

};


int main()
{
	//구조체 사용 - 변수 생성
	Student st = Student();
	//사용 시 .을 사용한다.
	st.name = "강지석";
	st.grade = 3;
	st.address = "서울시 노원구 상계동";

	cout << "학생 이름 = " << st.name << endl;
	cout << "학년 = " << st.grade << endl;
	cout << "학생 주소 = " << st.address << endl;













	return 0;
}