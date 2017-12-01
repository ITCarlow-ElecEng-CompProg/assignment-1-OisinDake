//Celcius to farhenheit
//Lab 1
//Oisin Dake
#include <iostream>

using namespace std;

int main()

{
    double fahrenheit, celsius;// store inputs
    cout << "Enter the temperature in Celsius : ";//display
    cin >> celsius;                              //take in value
    fahrenheit = (celsius * 9.0) / 5.0 + 32;  //calculation
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;//display

    return 0;

}
