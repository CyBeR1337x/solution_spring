/*
* Question 4: Write a C++ program to do following tasks
1. Define new data type to store data of Bank Account ( accountId(int), accountTitle(string),
balance(float) )
2. Declare an array of Bank Account having size M
3. Read data into the array defined in step 2
4. Calculate and display average balance
5. Display detail of all those accounts whose balance is greater than average balance.
*/

#include <iostream>
using namespace std;

struct Bank_acc {
	int accountId;
	char accountTitle[25];
	float balance;
};

void main() {
	Bank_acc accounts[10];

	//Gets input..
	for (int i = 0; i < 10; i++) {
		cout << "Enter Account ID: ";
		cin >> accounts[i].accountId;
		cout << "Enter Account Title: ";
		cin.getline(accounts[i].accountTitle, 25);
		cin.ignore(1000, '\n');
		cout << "Enter Account Balance: ";
		cin >> accounts[i].balance;
	}

	float balance_sum;

	for (int i = 0; i < 10; i++)
		balance_sum += accounts[i].balance;

	float avg_balance = balance_sum / 10;
	cout << "Average balance: " << avg_balance << endl;

	Bank_acc accounts_2[10];

	int index = 0;
	//Stores the details of accounts who greater balance than average balance;
	for (int i = 0; i < 10; i++) {
		if (accounts[i].balance > avg_balance) {
			accounts_2[index] = accounts[i];
			index++;
		}
	}

	//displays the details..
	cout << "Details of account whose balance is greater than average: " << endl;
	for (int i = 0; i < index; i++) {
		cout << "Account ID: " << accounts_2[i].accountId << endl;
		cout << "Account Title: " << accounts_2[i].accountTitle << endl;
		cout << "Account Balance: " << accounts_2[i].balance << endl;
	}

	system("pause");
}
