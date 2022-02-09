/*
* Question 2: Write a C++ program that reads data (including alphabets and digits) into character array
of size 25. Replace all digits into their English words. Like 2 will be replaced with two and 7 will be
replaced with seven. Display the final (updated) array.
Example:
Enter Data: Today is 5
Array after replacement of digit with their English words: Today is five
*/

#include <iostream>
using namespace std;
void main() {
	char line[25];
	string words[] = { "zero","one","two","three","four","five","six","seven","eight","nine", };

	cout << "Enter Data: ";
	cin.getline(line, 25);
	cout << "Array after replacement of digit with their English Words: ";
	for (int i = 0; line[i] != '\0'; ++i) {
		if (isdigit(line[i])) {
			int number = line[i] - '0';
			cout << words[number];
		}
		else
			cout << line[i];
	}

	cout << endl;
	system("pause");
}
