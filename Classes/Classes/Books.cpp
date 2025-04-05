//#include <iostream>
//using namespace std;
//#include <string>
//class Book {
//private:
//	int number;			//번호
//	string title;		//제목
//	string author;		//저자
//public:
//	//생성자 오버로딩 - 이름은 같고, 매개변수가 다르다.
//	Book() {
//		cout << "객체를 생성합니다.\n";
//	} // 기본 생성자 - 생략가능(자동으로 추가되기 때문에
//	//책 번호 입력 함수
//
//	~Book() {
//		cout << "객체를 소멸합니다.\n";
//
//	 }
//	Book(int num, string tit, string aut)
//	{
//		number = num;
//		title = tit;
//		author = aut;
//	}
//
//
//	//책 번호 가져오는 함수
//	int getNumber()
//	{
//		return number;
//	}
//
//
//	//책 제목 입력하고
//
//	//책 제목 가져오기
//	string getTitle()
//	{
//		return title;
//
//
//	}
//
//	//책 제목 가져오기
//	string getAuthor()
//	{
//		return author;
//
//
//	}
//};
//
//
//
//
//int main_NotNow()
//{
//	Book book1(100, "채식주의자", "한강");
//
//
//	cout << "책 번호 : " << book1.getNumber() << endl;
//	//
//	cout << "책 제목 : " << book1.getTitle() << endl;
//	//
//	cout << "작가 이름 : " << book1.getAuthor() << endl;
//
//	Book book[3] =
//	{
//		Book(100, "채식주의자", "한강"),
//		Book(101, "육식주의자", "낙동강"),
//		Book(102, "잡식주의자", "나일강")
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "책 번호 : " << book[i].getNumber() << endl;
//		cout << "책 제목 : " << book[i].getTitle() << endl;
//		cout << "작가 이름 : " << book[i].getAuthor() << endl;
//		cout << "\n ===================== \n\n";
//
//	}
//	return 0;
//}