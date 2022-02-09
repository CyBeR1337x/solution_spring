#include <iostream>
using namespace std;

void printLine();
void displaySubMenu();

void main() {
	char state;
	do {
	MAIN_MENU:
		cout << "Press 1 for SMS-Packages.\n" <<
			"Press 2 for Call Packages.\n" <<
			"Press 3 for Internet Packages.\n" <<
			"Press E to exit.." << endl;

		cout << "Enter your choice: ";
		cin >> state;

		if (state == '1') {
			displaySubMenu();
			cout << "Enter Your Choice: ";
			cin >> state;
			if (state == 'M' || state == 'm') {
				cout << "SMS monthly Package" << endl;
				cout << "On Net SMS: 5000" << endl;
				cout << "Off net SMS: 2000" << endl;
				cout << "Amount:\t 150" << endl;
				cout << "Subscription Code: *123*1#" << endl;
				printLine();
			}
			else if (state == 'W' || state == 'w') {
				cout << "SMS Weekly Package" << endl;
				cout << "On Net SMS: 2000" << endl;
				cout << "Off net SMS: 1000" << endl;
				cout << "Amount:\t 70" << endl;
				cout << "Subscription Code: *123*2#" << endl;
				printLine();
			}
			else if (state == 'D' || state == 'd') {
				cout << "SMS Weekly Package" << endl;
				cout << "On Net SMS: 1000" << endl;
				cout << "Off net SMS: 500" << endl;
				cout << "Amount:\t 20" << endl;
				cout << "Subscription Code: *123*3#" << endl;
				printLine();
			}
			else if (state == 'G' || state == 'g') {
				printLine();
				goto MAIN_MENU;
			}
			else if (state == 'E' || state == 'e')
				break;
		}
		else if (state == '2') {
			displaySubMenu();

			cout << "Enter Your Choice: ";
			cin >> state;

			if (state == 'M' || state == 'm') {
				cout << "Call Monthly Package" << endl;
				cout << "On Net Minutes: 5000" << endl;
				cout << "Off net Minutes: 500" << endl;
				cout << "Amount:\t 1100" << endl;
				cout << "Subscription Code: *123*4#" << endl;
				printLine();
			}
			else if (state == 'W' || state == 'w') {
				cout << "Call Weekly Package" << endl;
				cout << "On Net Minutes: 2000" << endl;
				cout << "Off net Minutes: 100" << endl;
				cout << "Amount:\t 400" << endl;
				cout << "Subscription Code: *123*5#" << endl;
				printLine();
			}
			else if (state == 'D' || state == 'd') {
				cout << "Call Daily Package" << endl;
				cout << "On Net Minutes: 500" << endl;
				cout << "Off net Minutes: 50" << endl;
				cout << "Amount:\t 40" << endl;
				cout << "Subscription Code: *123*6#" << endl;
				printLine();
			}
			else if (state == 'G' || state == 'g') {
				printLine();
				goto MAIN_MENU;
			}
			else if (state == 'E' || state == 'e')
				break;
		}
		else if (state == '3') {
			displaySubMenu();

			cout << "Enter Your Choice: ";
			cin >> state;

			if (state == 'M' || state == 'm') {
				cout << "Internet Monthly Package" << endl;
				cout << "On Net GB: 50" << endl;
				cout << "Amount:\t 500" << endl;
				cout << "Subscription Code: *123*7#" << endl;
				printLine();
			}
			else if (state == 'W' || state == 'w') {
				cout << "Internet Weekly Package" << endl;
				cout << "On Net GB: 10" << endl;
				cout << "Amount:\t 130" << endl;
				cout << "Subscription Code: *123*8#" << endl;
				printLine();
			}
			else if (state == 'D' || state == 'd') {
				cout << "Internet Daily Package" << endl;
				cout << "On Net GB: 5" << endl;
				cout << "Amount:\t 70" << endl;
				cout << "Subscription Code: *123*9#" << endl;
				printLine();
			}
			else if (state == 'G' || state == 'g') {
				printLine();
				goto MAIN_MENU;
			}
			else if (state == 'E' || state == 'e')
				break;

		}
		else if (state == 'E' || state == 'e')
			break;



	} while (true);
}

void printLine() {
	cout << "===============================================" << endl;
}

void displaySubMenu() {
	cout << "Press M for Monthly packages.\n" <<
		"Press W for Weekly Packages.\n" <<
		"Press D for Daily Packages.\n" <<
		"Press G to go in main menu.\n" <<
		"Press E to exit from system.\n" << endl;
}
