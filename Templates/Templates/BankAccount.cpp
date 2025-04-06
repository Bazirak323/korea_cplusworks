#include <iostream>
#include <string>
#include <vector>
using namespace std;



class BankAccount {
private :
	int accountNumber;
	string owner;
	int balance;	//�ܰ�
public :
	BankAccount(int accountNumber, string owner, int balance) :
		accountNumber(accountNumber), owner(owner), balance(balance) {}

	void displayInfo(); //��������
	void deposit(int amount);
	void withdraw(int amount);
};


void BankAccount::displayInfo()
{
	cout << "���� ����\n";
	cout << "  ���� ��ȣ : " << accountNumber << endl;
	cout << "  ������    : " << owner << endl;
	cout << "  �ܾ�      : " << balance << "��" << endl;

}

void BankAccount::deposit(int amount)
{
	if (amount < 0)
	{
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";

	}
	else
	{
		balance += amount;
		cout << "�Ա� �Ǿ����ϴ�.\n ���� �ܾ� : " << balance << "��\n";

	}
}

void BankAccount::withdraw(int amount)
{
	if (amount < 0 || amount > balance)
	{
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";

	}
	else
	{
		balance -= amount;
		cout << "��� �Ǿ����ϴ�.\n ���� �ܾ� : " << balance << "��\n";

	}
}


int main()
{
	vector<BankAccount> account;

	account.push_back(BankAccount(1000, "�̿���", 10000));
	account.push_back(BankAccount(1001, "���ϴ�", 104000));
	account.push_back(BankAccount(1002, "�̶�", 5000));


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