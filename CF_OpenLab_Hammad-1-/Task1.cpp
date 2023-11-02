// Code for Task 1

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

		cout << "Book issued." << endl;
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

//Code for Task 2:

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int m = 5; m * m <= num; m += 6) {
        if (num % m == 0 || num % (m + 2) == 0)
            return false;
    }

    return true;
}

void PrimeNuminRange(int s, int e) {
    cout << "Prime numbers in the range [" << s << ", " << e << "]: ";
    for (int number = s; number <= e; ++number)
        if (isPrime(number))
            cout << number << " ";
    cout << endl;
}

int main() {
    int choice;
    do {
        cout << "Choose an option:" << endl;
        cout << "1. Find prime numbers in a range" << endl;
        cout << "2. Check if a specific number is prime" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int s, e;
            cout << "Enter the range (start, end): ";
            cin >> s >> e;
            PrimeNuminRange(s, e);
        }
        else if (choice == 2) {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            cout << num << (isPrime(num) ? " is prime." : " is not prime.") << endl;
        }
        else if (choice != 3)
            cout << "Invalid choice. Please try again." << endl;
    } while (choice != 3);

    return 0;
}
