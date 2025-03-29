#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>
#include <thread> //sleep 함수를 사용하기 위한 
using namespace std;

int main_time()
{
	/*

	time_t now = time(NULL);

	cout << "1970년 1월 1일 자정 이후 : " << now << "초" << endl;
	cout << "1970년 1월 1일 자정 이후 : " << now / 60 << "분" << endl;
	cout << "1970년 1월 1일 자정 이후 : " << now / (60 * 60) << "시" << endl;
	cout << "1970년 1월 1일 자정 이후 : " << now / (60 * 60 * 24) << "일" << endl;
	cout << "1970년 1월 1일 자정 이후 : " << now / (60 * 60 * 24 * 365) << "년" << endl;


	//수행시간 측정
	time_t start, end;

	//0.5초 간격으로 1 ~ 10 출력

	time(&start);
	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}
	time(&end);

	cout << "수행시간 : " << (end - start) << "초" << endl;



	*/

	time_t ct;
	struct tm* datetime; // tm 구조체 포인터 변수 선언

	time(&ct);
	datetime = localtime(&ct); //localtime 로 표기 포맷팅


	cout << "현재 년도 : " << datetime->tm_year + 1900 << endl;
	cout << "현재 월 : " << datetime->tm_mon + 1 << endl;
	cout << "현재 일 : " << datetime->tm_mday << endl;
	cout << "현재 시 : " << datetime->tm_hour << endl;
	cout << "현재 분 : " << datetime->tm_min << endl;
	cout << "현재 초 : " << datetime->tm_sec << endl;


	cout << "오늘 날짜 : " << datetime->tm_year + 1900 << "년 " << datetime->tm_mon + 1 << "월 "
		<< datetime->tm_mday << "일 " << datetime->tm_hour << "시 " << datetime->tm_min << "분 "
		<< datetime->tm_sec << "초 ";























































	return 0;
}