#include <iostream>
#include <cstdlib>
using namespace std;

void Velocity()
{
	double D, T;
	double answer;
	cout << "enter a distance value, and a time value: ";
	cin >> D;
	cin >> T;
	answer = (D / T);
	cout << "The calculation is: " << answer << " m/s" << endl;
}

void Acceleration()
{
	double D, T;
	double answer;
	cout << "enter a change in velocity value, and a change in time value: ";
	cin >> D;
	cin >> T;
	answer = (D / T);
	cout << "The calculation is: " << answer << " m/s" << endl;
}

void Work()
{
 	double F, D;
	double answer;
	cout << "enter a force value, and a distance value: ";

	cin >> F;
	cin >> D;
	answer = (F * D);
	cout << "The calculation is: " << answer << " Kg*m^2/s^2" << endl;
}

void Power()
{
	double F, V;
	double answer;
	cout << "enter a distance value, and a time value: ";

	cin >> F;
	cin >> V;
	answer = (F * V);
	cout << "The calculation is: " << answer << " W" << endl;
}

int main()
{
	int option;
	char yes;

	do{
		cout << "Hello welcome to physics calculator. What would you like to calculate?" << endl;
		cout << "1. Velocity" << endl;
		cout << "2. Acceleration" << endl;
		cout << "3. Work" << endl;
		cout << "4. Power" << endl; 
		cin >> option;

	switch (option)
	{
		case 1:
		Velocity();
		break;

		case 2:
		Acceleration();
		break;

		case 3:
		Work();
		break;

		case 4:
		Power();
		break;
	}

	cout << "Perform another calculation? (y or n)" << endl;
	cin >> yes;

} while(yes == 'y');

	return 0;
}
