/*
Question 1: Write a C++ program that declares four character arrays with following name.
First_Name of size M
Middle_Name of size N
Last_Name of size P
Full_Name of size M+N+P
After declaring memories read data into first three arrays. Copy data from three arrays into fourth
array. Display the fourth array.
Exammple:
Enter First Name: Jamal
Enter Middle Name: Ahmad
Enter Last Name: Khan
Full Name is Jamal Ahmad Khan
*/

#include <iostream>
using namespace std;

void main() {
	char first_name[10], middle_name[10], last_name[10], full_name[30] = ""; // = "" is used to initialize the array and remove garbage datae
	cout << "Enter Your First Name: ";
	cin >> first_name;
	cout << "Enter Your Middle Name: ";
	cin >> middle_name;
	cout << "Enter Your Last Name: ";
	cin >> last_name;

	int x = strlen(first_name); //strlen() returns the length of given array ( or string )
	for (int i = 0; i < x; i++)
		full_name[i] = first_name[i];

	int start_offset;

	start_offset = strlen(full_name);

	for (int i = 0; i < strlen(middle_name); i++) {
		if (i == 0) {
			full_name[start_offset] = ' '; //Inserts a space ..
			start_offset++;
		}
		full_name[start_offset] = middle_name[i];
		start_offset++;
	}

	start_offset = strlen(full_name);
	for (int i = 0; i < strlen(last_name); i++) {
		if (i == 0) {
			full_name[start_offset] = ' '; //Inserts a space ..
			start_offset++;
		}
		full_name[start_offset] = last_name[i];
		start_offset++;
	}

	cout << "Full Name is " << full_name << endl;

	system("pause");

}
