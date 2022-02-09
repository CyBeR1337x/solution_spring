/*
* Question 10: A company wants to transmit data over the telephone, but is concerned that its phone
could be tapped. The company has asked you to write a C++ program that encrypts the data so that
it can be transmitted more securely. Program should read an integer value and encrypt it as follows:
Replace each even digit into next odd digit and each odd digit into next even digit.
Example: If user enters a 4 digit number 1239, then the output would be 2340.(next of 9 is 0)

*/
//Jugaar Hisab.....
#include <iostream>
using namespace std;

void encrypt(int);

void main() {
	int x;
	cout << "Enter Value: ";
	cin >> x;
	encrypt(x);
}

void encrypt(int y) {
	int no_of_digits = 0, int g = y;
	while (g != 0) {
		g /= 10;
		no_of_digits++;
	}
	int remainder, i;
	int* array = new int[no_of_digits];
	for (i = 0; i < no_of_digits; i++) {
		remainder = y % 10;
		if (remainder == 9)
			remainder = 0;
		else
			remainder += 1;

		array[i] = remainder;
		y /= 10;
	}

	for (int j = (i - 1); j >= 0; j--)
		cout << array[j];

	cout << endl;

	system("pause");
}
