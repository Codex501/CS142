//*************************///
//
//Luis Ayala 
//2/25/20
//
//
//
//Candy Database
//
//*******************************///
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include "time.h"
#include <fstream>
using namespace std;

/* const int Numberofcandy = 6; */

int menufuction(int a)	{
	cout << "Here is a list of commands: " <<endl << "E - Eat a piece of 
	Candy"<< endl << "T - trick or Treat: get a piece of candy "<<endl << "I - 
	Inventory listing " <<endl<< "C - List candy types " <<endl<< "M - Print this menu
	of commands " <<endl<< "S - Save to the file candy.dat"<<endl<< "L - Load from the 
	file candy.dat"<<endl <<"Q - Quit this program " << endl ;
}
int candytypes(int b) {
	cout << " 1 Candy Corn" << endl;
	cout << " 2 Licorice" << endl;
	cout << " 3 Jaw Breakers" << endl;
	cout << " 4 Peabutbutter Cups" << endl;
	cout << " 5 M&Ms" << endl;
	cout << " 6 Others" << endl;
}
int inventory(int numberofcandy[])	{
	int sum = 0;
	cout << " Candy Corn: "<< numberofcandy[0]<<endl;
	cout<< " Licorice: " << numberofcandy[1]<<endl;
	cout<< " Jaw Breakers: " << numberofcandy[2]<<endl;
	cout<< " Peanutbutter Cups: "<< numberofcandy[3]<<endl;
	cout<<" M&M: " << numberofcandy[4]<<endl;
	cout<<" Other: " << numberofcandy[5]<<endl;
	sum = sum + numberofcandy[0]+ numberofcandy[1]+ numberofcandy[2]+ numberofcandy[3]+ numberofcandy[4]+ numberofcandy[5];
	cout<<" You have "<< sum <<" Candy in total "<< endl;
}
int trick(int numberofcandy[])	{
	int choose = 0;
	cout<< " Please pick a candy(1-6): ";
	cin >> choose;
	if (choose == 1)	{
		numberofcandy[0]++;
	}
	if (choose == 2)	{
		numberofcandy[1]++;
	}
	if (choose == 3)	{
		numberofcandy[2]++;
	}
	if (choose == 4)	{
		numberofcandy[3]++;
	}
	if (choose == 5)	{
		numberofcandy[4]++;
	}
	if (choose == 6)	{
		numberofcandy[5]++;
	}
}
int eat(int numberofcandy[])	{
	int choose = 0;
	cout<< " Please pick a to eat candy(1-6): ";
	cin >> choose;
	if (choose == 1)	{
		if (numberofcandy[0] <= 0)	{
			cout << " Sorry you dont have any of that candy" << endl;
		}
		else {
			numberofcandy[0]--;
		}
	}
	if (choose == 2)	{
		if (numberofcandy[1] == 0)	{
			cout << " Sorry you dont have any of that candy" << endl;
		}
		else {
			numberofcandy[1]--;
		}
	}
	if (choose == 3) {
		if (numberofcandy[2] == 0)	{
			cout << " Sorry you dont have any of that candy" << endl;
		}
		else {
			numberofcandy[2]--;
		}
	}
	if (choose == 4)	{
		if (numberofcandy[3] ==0)	{
			cout << " Sorry you dont have any of that candy" << endl;
		}
		else {
			numberofcandy[3]--;
		}
	}
	if (choose == 5)	{
		if (numberofcandy[4] ==0)	{
			cout << " Sorry you dont have any of that candy" << endl;
		}
		else {
		numberofcandy[4]--;
		}
	}
	if (choose == 6)	{
		if (numberofcandy[5] ==0)	{
			cout << " Sorry you dont have any of that candy" << endl;
	}
		else {
			numberofcandy[5]--;
		}
	}
}
void savefunction(int numberofcandy[]) {
	ofstream outputStream;
	outputStream.open("DataStore.dat");
	outputStream<< numberofcandy[0] << endl;
	outputStream<< numberofcandy[1]<< endl;
	outputStream<< numberofcandy[2]<< endl;
	outputStream<< numberofcandy[3]<< endl;
	outputStream<< numberofcandy[4]<< endl;
	outputStream<< numberofcandy[5]<< endl;
	outputStream.close();
}
void loadfuntion(int numberofcandy[])	{
	ifstream inputStream;
	inputStream.open("DataStore.dat");
	inputStream>> numberofcandy[0];
	inputStream>> numberofcandy[1];
	inputStream>>numberofcandy[2];
	inputStream>> numberofcandy[3];
	inputStream>> numberofcandy[4];
	inputStream>> numberofcandy[5];
	inputStream.close();
}
main ()	{
	int numberofcandy[6]= {0,0,0,0,0,0};
	int type = 0;
	int CandyCorn = 0;
	int Licorice = 0;
	int JawBreakers = 0;
	int PeanutbutterCups = 0;
	int MM = 0;
	int Other = 0;
	char command = '\0';
	
	cout << "Welcome to the Candy Database Program!"<< endl;
	cout << "Here is a list of commands: " <<endl << "E - Eat a piece of Candy"<<
	endl << "T - trick or Treat: get a piece of candy "<<endl << "I - Inventory 
	listing " <<endl<< "C - List candy types " <<endl<< "M - Print this menu of 
	commands " <<endl<< "S - Save to the file candy.dat"<<endl<< "L - Load from the 
	file candy.dat"<<endl <<"Q - Quit this program " << endl ;
	
	while (command != 'Q' )	{
		cout << "Command -> ";
		cin>> command;
		if ( command == 'M' )	{
			menufuction(command);
		}
		if (command == 'C')	{
			candytypes(command);
		}
		if (command == 'I')	{
			inventory(numberofcandy);
		}
		if (command == 'T')	{
			trick(numberofcandy);
		}
		if ( command == 'E')	{
			eat(numberofcandy);
		}
		if( command == 'S')	{
			savefunction(numberofcandy);
		}
		if(command == 'L')	{
			loadfuntion(numberofcandy);
		}
	}
	cout << " Have a good Halloween"<<endl;
}