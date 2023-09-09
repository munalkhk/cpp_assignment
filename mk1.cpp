#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	string Name;
	int hours;

	cout << "\n\n\n\n\t\t\t\t\tLUC Employees payslip\n" << endl;
	cout << "\t\t\t\tNO\tName\tHours\twages\tSOCSO" << endl;



	int wages;
	double sosco;

	for (int i = 1; i < 6; i++)
	{
		cout << "\nEnter Name:";
		cin >> Name;
		cout << "Enter Hours:";
		cin >> hours;
		if (hours >= 0 && hours <= 40) {
			wages = 5 * hours;
			sosco = 0.01 * wages;
			cout << "\t\t\t\t" << i << "\t" << Name << "\t" << hours << "\t" << wages << "\t" << fixed<<setprecision(2)<<sosco << "\t";
		}
		else if (hours > 40 && hours <= 60) {
			wages = 8 * hours;
			sosco = 0.01 * wages;
			cout << "\t\t\t\t" << i << "\t" << Name << "\t" << hours << "\t" << wages << "\t" << fixed<<setprecision(2) << sosco << "\t";
		}
		else if (hours > 60) {

			wages = 10 * hours;
			sosco = 0.01 * wages;
			cout << "\t\t\t\t" << i << "\t" << Name << "\t" << hours << "\t" << wages << "\t" << fixed<<std::setprecision(2) << sosco << "\t";
		}
	}
	return 0;
}