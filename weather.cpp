//*****************************
// Weather program
// Luis Ayala
// 1/17/20
// CS142
// This prgram should be able to covert Fahrenheit to Centigrade.
//*****************************
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
		string confirmation = " ";
		int temp = 0;
		cout << " Welcome to the UNWEDGE Weather Program type okay to continue. ";
		cin >> confirmation;
		cout << " Please enter the temperature in degrees Fahrenheit to convert to Centigarde: "<< endl;
		cin >> temp;
		cout << "The temperature is "<< fixed << setprecision(3) << (5.0/9.0)*(temp -32.0) << " " <<" Centigarde. " << endl;
		if (temp < 20) {
			<<" This temperature is considered cold. " << " " << endl;
		
		if (temp > 85) {
			cout <<" This temperature is considered hot. " << " " << endl;
		}
		
		return 0;
}