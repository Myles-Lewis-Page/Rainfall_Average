#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double rain1, rain2, rain3;
	char month1[15], month2[15], month3[15];

	cout << "Enter month: "; cin >> month1;
	cout << "Enter rainfall for " << month1 << ": "; cin >> rain1;

	cout << "Enter month: "; cin >> month2;
	cout << "Enter rainfall for " << month2 << ": "; cin >> rain2;

	cout << "Enter month: "; cin >> month3;
	cout << "Enter rainfall for " << month3 << ": "; cin >> rain3;

	cout << "The average rainfall for "
	<< month1 << ", "
	<< month2 << ", and "
	<< month3 << " is "
	<< setprecision(2) << showpoint << fixed
	<< (rain1+rain2+rain3)/3.0
	<< " inches." << endl;
	return 0;
}