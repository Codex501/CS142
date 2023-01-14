//*****************
//Luis Ayala
// 1/31/2020
// tution program
//********************
#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;

main () {
	float credits = 0.00;
	while(credits != -1) {
		cout << " Welcome to the Tution Bill Program." << endl;
		cout << " Please enter the amount of credit hours you are taking?( -1 to exit)" << endl;
		cin>> credits;
		if (credits <= 11.0 && credits >= 0.0) {
			cout << " The tution bill will be $" << fixed<<setprecision(2)<< credits * 1502.00 << "." << endl;
			cout << endl;
			cout << endl;
		}
		else if ( credits <= 20.0 && credits >= 12.0) {
			cout << " The tution bill will be $"<< fixed <<setprecision(2) << 18025.00 << "." << endl;
			cout << endl;
			cout << endl;
		}
		else if ( credits >= 21.0) {
			cout << " The tution bill will be $" << fixed <<setprecision(2) << 18025.00 + 1502.00 * (credits - 20 )<< "." << endl;
			cout << endl;
			cout << endl;
		}
		else if ( credits = -1.0)  {
			cout << " Goodbye and Happy check writing!!" << endl;
		}
	}
}