#include<iostream>
#include<iomanip>
using std:: cin;
using std::cout;
using std::fixed;
using std::setprecision;

const double PAY_RATE = 12.50;

int main()
{
	double hours;
	cout << "Enter hours worked: ";
	cin >> hours;
	
	double netPay = hours * PAY_RATE;
	
	cout << "The net pay is $" << fixed << setprecision(2) 
	     << netPay << std::endl;
	cout << "Exiting..." << std::endl;
	return 0;
}