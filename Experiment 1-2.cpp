#include <iostream>
#include <string>

using namespace std;

int main()
{
	double mass, density, volume;
	cout << "Input the Mass, in grams, and Density, in grams per cubic centimeters, and Output the Volume of the Object." << endl;
	cout << " " << endl;

	cout << "Input Mass" << endl;
	cin >> mass;
	cout << " " << endl;

	cout << "Input Density" << endl;
	cin >> density;
	cout << " " << endl;

	volume = mass / (4 * density) ;

	cout << "Volume=" << volume << "cm^3" << endl;

	system ("pause");

	return 0;
}