#include <iostream>
#include <cstdlib>
#include "bluesky.cpp"

using namespace std;

int main()
{

	system("CLS");
	cout<< "\n";
	cout << "\t    AIRLINE RESERVATION SYSTEM \n";
	cout<< "\n";
	cout<<"   --------------------------- MENU OPTIONS ---------------------------   \n"<<endl;

	menu();
	seat_fill();

	return 0;


}



