#include <iostream>
#include <string>
using namespace std;


int main_INPUT() 
{

	int number; //학번
	string name;
	int eng;
	int math;
	double avg;



	cout << "학번 입력 : ";
	cin >> number;





	cout << "이름 입력 : ";
	cin >> name;


	cout << "영어점수 입력 : ";
	cin >> eng;

	cout << "수학점수 입력 : ";
	cin >> math;

	avg = (double)((math + eng) / 2);


	cout << "\n===학생의 정보===\n\n";




	cout << "학번 : " << number << endl;
	cout << "이름 : " << name << endl << "영어 점수 : " << eng << endl << "수학 점수 : " << math << endl;
	cout << "평균 : " << avg << endl;



	//조건 연산 (조건식 ? "참" : "거짓)


	int faterAge = 199;
	int matherAge = 50;
	char result;
	string result2;


	result = (faterAge > matherAge) ? 'T' : 'F';
	result2 = (faterAge > matherAge) ? "뜨루" : "뻘스";

	cout << "결과 : " << result2 << endl;










	return 0;
}