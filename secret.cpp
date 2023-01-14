//*************************///
//
//Luis Ayala 
//4/1/20
//
//
//
//Secret message
//
//*******************************///
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include "time.h"
#include <fstream>
using namespace std;

string secretmessage(string theword)	{
	for(int loopVariable = 0; loopVariable < theword.length(); loopVariable++)	{
		if((65 <= theword[loopVariable] ) && ( theword[loopVariable] <= 87))	{
		theword[loopVariable] = theword[loopVariable] + 3;
		}
		else if((88 <= theword[loopVariable] ) && ( theword[loopVariable] <=90))	{
			theword[loopVariable] = theword[loopVariable] -23;
		}
		else if((97<= theword[loopVariable] ) && ( theword[loopVariable] <=119))	{
			theword[loopVariable]= theword[loopVariable] + 3;
		}
		else if((120<= theword[loopVariable] ) && ( theword[loopVariable] <=122))	{
			theword[loopVariable] = theword[loopVariable] -23;
		}
	}
	return theword;
}

int main ()	{
	string message= "";
	int lengthstring = 0;
	cout<< "Please enter the message you want to cipher :"<< endl;
	getline(cin,message);
	lengthstring = message.length();
	cout<< " Your cripted message is: "<< secretmessage(message) << endl;
}