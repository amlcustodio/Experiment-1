#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;
int main ()
{

	string TicketPrice;
	string TicketSold;
	cout << "Ticket Type    Ticket Price" << endl;
	cout << "Box                250$" << endl;
	
	double a, Sbox;
	cout << "Number of Tickets Sold: " << endl;
	cin >> a;
	Sbox = a * 250;
	cout << setw(10) << setprecision(2) << fixed << "TOTAL SALES FOR BOX TICKETS IS $" << Sbox << endl;
	cout << " " << endl;

	cout << "Ticket Type    Ticket Price" << endl;
	cout << "Sideline            100$" << endl;

	double b, Ssideline;
	cout << "Number of Tickets Sold: " << endl;
	cin >> b;
	Sbox = b * 100;
	cout << setw(10) << setprecision(2) << fixed << "TOTAL SALES FOR BOX TICKETS IS $" << Sbox << endl;
	cout << " " << endl;

	cout << "Ticket Type    Ticket Price" << endl;
	cout << "Premium             50$" << endl;
	
	double c, Spremium;
	cout << "Number of Tickets Sold: " << endl;
	cin >> c;
	Sbox = c * 50;
	cout << setw(10) << setprecision(2) << fixed << "TOTAL SALES FOR BOX TICKETS IS $" << Sbox << endl;
	cout << " " << endl;

	cout << "Ticket Type    Ticket Price" << endl;
	cout << "General Admission 25$" << endl;
	
	double d, Sgenad;
	cout << "Number of Tickets Sold: " << endl;
	cin >> d;
	Sbox = d * 25;
	cout << setw(10) << setprecision(2) << fixed << "TOTAL SALES FOR BOX TICKETS IS $" << Sbox << endl;
	cout << " " << endl;
	
	_getch();
	return 0;
}