/*
   Calculate the temperatures in Celcius, Fahrenheit and Kelvin
*/

//Includes and namespace
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double celciusTemp, // Declaring the variable that will store all celcius values
		   kelvinTemp, // Declaring the variable that will store all kelvin values
		   fahrenheitTemp; // Declaring the variable that will store all fahrenheit values

	cout << "Please enter a number in degrees Celcius:   ";
	cin >> celciusTemp; // Reading the celcius temperature

	fahrenheitTemp = (9.0/5.0)*celciusTemp + 32; // Converting celcius temperature to fahrenheit temperature
	kelvinTemp = celciusTemp + 273.15; // Converting celcius temperature to kelvin temperature

	cout << "The equivalent Fahrenheit temperature is:      " << setw(6) << setprecision(2) << fixed << fahrenheitTemp << " degrees." << endl; // Displaying the fahrenheit temperature with 2 units after decimal point of precision
	cout << "The equivalent Kelvin temperature is:          " << setw(6) << setprecision(2) << fixed << kelvinTemp << " K." <<endl; // Displaying the kelvin temperature with 2 units after decimal point of precision



	cout << "Please enter a number in degrees Fahrenheit:   ";
	cin >> fahrenheitTemp; // Reading the fahrenheit temperature

	celciusTemp = (5.0/9.0)*(fahrenheitTemp - 32); // Converting fahrenheit temperature to celcius temperature
	kelvinTemp = celciusTemp + 273.15; // Converting the above celcius temperature to kelvin temperature

	cout << "The equivalent Celcius temperature is:      " << setw(6) << setprecision(2) << fixed << celciusTemp << " degrees." << endl; // Displaying the celcius temperature with 2 units after decimal point of precision
	cout << "The equivalent Kelvin temperature is:       " << setw(6) << setprecision(2) << fixed << kelvinTemp << " K." << endl; // Displaying the kelvin temperature with 2 units after decimal point of precision



	cout << "Please enter a number in degrees Kelvin:   ";
	cin >> kelvinTemp; // Reading the kelvin temperature

	celciusTemp = kelvinTemp - 273.15; // Converting kelvin temperature to celcius temperature
	fahrenheitTemp = (9.0/5.0)*celciusTemp + 32; // Converting the above celcius temperature to kelvin temperature

	cout << "The equivalent Celcius temperature is:         " << setw(6) << setprecision(2) << fixed << celciusTemp << " degrees." << endl; // Displaying the celcius temperature with 2 units after decimal point of precision
	cout << "The equivalent Fahrenheit temperature is:      " << setw(6) << setprecision(2) << fixed << fahrenheitTemp << " degrees." << endl; // Displaying the fahrenheit temperature with 2 units after decimal point of precision

	return 0;
} // The end
