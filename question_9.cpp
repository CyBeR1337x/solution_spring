#include <iostream>
using namespace std;

struct Bank {
	int cid, age;
	char name[25];
	float loanRequired;
	char approvalStatus;
	double salary;
};

void getData(Bank[], int);
char isLoanApproved(Bank);
void DisplayApprovedList(Bank[], int);
void DisplayNotApprovedList(Bank[], int);

void main() {
	Bank customers[5], approvedCustomers[5], nonApprovedCustomers[5];
	int index_1 = 0, index_2 = 0;
	for (int i = 0; i < 5; i++) {

		getData(customers, i);

		char isApproved = isLoanApproved(customers[i]);

		if (isApproved == 'y') {
			approvedCustomers[index_1] = customers[i];
			index_1++;
		}
		else {
			nonApprovedCustomers[index_2] = customers[i];
			index_2++;
		}
	}

	DisplayApprovedList(approvedCustomers, index_1);
	DisplayNotApprovedList(nonApprovedCustomers, index_2);

	system("pause");

}

void getData(Bank x[], int index) {
	cout << "Enter Customer's ID: ";
	cin >> x[index].cid;
	cout << "Enter Customer's Name: ";
	cin >> x[index].name;
	cout << "Enter Customer's Age: ";
	cin >> x[index].age;
	cout << "Enter Customer's Salary: ";
	cin >> x[index].salary;
	cout << "Enter Loan Required: ";
	cin >> x[index].loanRequired;
}

char isLoanApproved(Bank x) {
	char approval = 'n';
	if (x.loanRequired < 1000000 && x.salary > 50000)
		approval = 'y';
	else if (x.loanRequired < 2000000 && x.salary > 80000)
		approval = 'y';
	else if (x.loanRequired < 3000000 && x.salary > 120000)
		approval = 'y';

	return approval;
}

void DisplayApprovedList(Bank array[], int size) {
	cout << "Details of Those whose Loan is approved: " << endl;
	for (int i = 0; i < size; i++) {
		cout << "ID: " << array[i].cid << endl;
		cout << "Name: " << array[i].name << endl;
		cout << "Age: " << array[i].age << endl;
		cout << "Salary: " << array[i].salary << endl;
		cout << "Loan Required: " << array[i].loanRequired << endl;
	}
	cout << "============================================" << endl;
}

void DisplayNotApprovedList(Bank array[], int size) {
	cout << "Details of Those whose Loan is Not approved: " << endl;
	for (int i = 0; i < size; i++) {
		cout << "ID: " << array[i].cid << endl;
		cout << "Name: " << array[i].name << endl;
		cout << "Age: " << array[i].age << endl;
		cout << "Salary: " << array[i].salary << endl;
		cout << "Loan Required: " << array[i].loanRequired << endl;
	}
	cout << "============================================" << endl;
}
