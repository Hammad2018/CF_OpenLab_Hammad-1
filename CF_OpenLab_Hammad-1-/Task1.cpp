#include <iostream>
#include <string>
using namespace std;

int main() {
	string operation, book_name;
	int days, late_days, fine = 0;
	cout << "Do you want to issue or return a book (I/R)? " << endl;
	cin >> operation;

	if (operation == "I") {
		cout << "Which book do you want to issue?" << endl;
		cin >> book_name;

		cout << book_name << " issued." << endl;
	}

	else if (operation == "R") {
		cout << "How many days have you had the book for?" << endl;
		cin >> days;

		if (days > 7) {
			late_days = days - 7;
			fine = late_days * 1;

			cout << "You have incurred a fine of $" << fine << " due to late returns." << endl;
		}

		else {
			cout << "Book returned successfully" << endl;
		}
	}
	else {
		cout << "Do you want to issue or return a book (I/R)? " << endl;
	}
}