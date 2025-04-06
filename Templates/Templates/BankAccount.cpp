#include <iostream>
#include <string>
#include <vector>
using namespace std;



class BankAccount {
private :
	int accountNumber;
	string owner;
	int balance;	//잔고
public :
	BankAccount(int accountNumber, string owner, int balance) :
		accountNumber(accountNumber), owner(owner), balance(balance) {}

	void displayInfo(); //계좌정보
	void deposit(int amount);
	void withdraw(int amount);
};


void BankAccount::displayInfo()
{
	cout << "계좌 정보\n";
	cout << "  계좌 번호 : " << accountNumber << endl;
	cout << "  계좌주    : " << owner << endl;
	cout << "  잔액      : " << balance << "원" << endl;

}

void BankAccount::deposit(int amount)
{
	if (amount < 0)
	{
		cout << "유효한 금액을 입력하세요.\n";

	}
	else
	{
		balance += amount;
		cout << "입금 되었습니다.\n 현재 잔액 : " << balance << "원\n";

	}
}

void BankAccount::withdraw(int amount)
{
	if (amount < 0 || amount > balance)
	{
		cout << "유효한 금액을 입력하세요.\n";

	}
	else
	{
		balance -= amount;
		cout << "출금 되었습니다.\n 현재 잔액 : " << balance << "원\n";

	}
}


int main()
{
	vector<BankAccount> account;

	account.push_back(BankAccount(1000, "이우주", 10000));
	account.push_back(BankAccount(1001, "이하늘", 104000));
	account.push_back(BankAccount(1002, "이땅", 5000));


	account[0].deposit(1500000);

	account[0].withdraw(55555555555555555);



	//for (int i = 0; i < account.size(); i++)
	//{
	//	account[i].displayInfo();
	//	cout << "==========================================\n";

	//}

	for (BankAccount account : account) 
	{
		account.displayInfo();
		cout << "==========================================\n";

	}
	return 0;
}