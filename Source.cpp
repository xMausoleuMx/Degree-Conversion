#include <iostream>

using namespace std;

const double k_A = 9.0 / 5.0;
const double k_B = 5.0 / 9.0;
const double k_PI = 3.141592;

int main()
{
	char original, converted;
	float degrees;

	cout << "Enter the desired conversion" << endl;
	do{
		cin >> degrees>> original >> converted;

		if (original == 'd' && converted == 'r')
			cout << degrees * (k_PI / 180) << " Radians" << endl;
		else if (original == 'c' && converted == 'f')
			cout << degrees * k_A + 32 << " Farenheit" << endl;
		else if (original == 'r' && converted == 'd')
			cout << degrees *(180 / k_PI) << " Degrees" << endl;
		else if (original == 'f' && converted == 'c')
			cout << (degrees - 32) * k_B << " Celcius" << endl;
		else if (original == 'f' && converted == 'k')
			cout << (degrees + 459.67) * k_B << " Kelvin" << endl;	
		else if (original == 'k' && converted == 'f')
			cout << degrees * k_A + 459.367 << "Farenheit" << endl;
		else if (original == 'c' && converted == 'k')
			cout << degrees + 273.15 << " Kelvin" << endl;
		else if (original == 'k' && converted == 'c')
			cout << degrees - 273.15 << "Celcius" << endl;
		else
			cout << "Do not know the unit to convert to" << endl;

	} while (1);
}