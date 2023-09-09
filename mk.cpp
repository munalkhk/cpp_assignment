#include <iostream>
#include <string>
using namespace std;
int main() {
	string name, grade;
	int marks, min = 100000000, max = 0, total = 0, n = 10;
	double average = 0;

	cout << "\n\n\t\t\t\t\tEXAMINATION REPORT" << endl;
	cout <<"\n\t\t\t\tINTRODUCTION TO C++ PROGRAMMING" << endl;
	cout << "\n\t\t\t No.\t Student name \t Mark \t Grade" << endl;
	for (int i = 1; i <= n; i++) {
		cout << "Enter name: ";
		getline(cin, name);
		cout << "Enter marks: ";
		cin >> marks;
		cin.ignore();
		if (marks >= 80 && marks <= 100) {
			grade = "A";
		}
		else if (marks >= 65 && marks <= 79) {
			grade = "B";
		}
		else if (marks >= 50 && marks <= 64) {
			grade = "C";
		}
		else {
			grade = "F";
		}
		if (i == 1) {
			min = marks;
			max = marks;
		}
		else {
			if (marks < min) {
				min = marks;
			}
			if (marks > max) {
				max = marks;
			}
		}
		total += marks;

		cout << "\t\t\t " << i << "\t " << name << "\t\t " << marks << "\t " <<
			grade << endl;
	}
	average = total / n;
	cout << "\nAverage Mark = " << average << endl;
	cout << "Minimum Mark = " << min << endl;
	cout << "Maximum Mark = " << max << endl;
	return 0;
}