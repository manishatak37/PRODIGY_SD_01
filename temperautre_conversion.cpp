#include<iostream>
using namespace std;

double celciusToFarenheit(double celcius);
double celciusToKelvin(double celcius);
double KelvinToCelcius(double Kelvin);
double KelvinToFarenheit(double Kelvin);
double FarenheitToCelcius(double Farenheit);
double FarenheitToKelvin(double Farenheit);

int main()
{
	int temp;
	char c;
	cout<<"Enter the temperature"<<endl;
	cin>>temp;
	cout<<"Enter the unit of measurement (c for celcius , k for kelvin ,f for farenheit)"<<endl;
	cin>>c;
	
	if(c=='c' || c =='C')
	{
		cout<< " Celcius  "<< temp<<endl;
		cout<< " Kelvin  "<< celciusToKelvin(temp)<<endl;
		cout<< " Farenheit  "<< celciusToFarenheit(temp)<<endl;
	}
	else if(c=='k' || c =='K')
	{
		cout<< " Kelvin  "<< temp<<endl;
		cout<< " Celcius  "<< KelvinToCelcius(temp)<<endl;
		cout<< " Farenheit  "<< KelvinToFarenheit(temp)<<endl;
	}
	else if(c=='F' || c =='f')
	{
		cout<< " Farenheit  "<< temp <<endl;
		cout<< " Kelvin  "<< FarenheitToKelvin( temp)<<endl;
		cout<< " Celcius  "<< FarenheitToCelcius(temp)<<endl;
		
	} 
	else
	{
		cout<<"Enter valid"<<endl;
	}
	
}

double celciusToFarenheit(double celcius)
{
	return (9/5*celcius)+32;
}

double celciusToKelvin(double celcius)
{
	return celcius + 273.15;
}

double KelvinToCelcius(double Kelvin)
{
	return (Kelvin - 273.15);
}

double KelvinToFarenheit(double Kelvin)
{
	return (Kelvin * 9.0 / 5.0) - 459.67;
}

double FarenheitToCelcius(double Farenheit)
{
	return (Farenheit - 32) * 5 / 9;;
}

double FarenheitToKelvin(double Farenheit)
{
	return (Farenheit + 459.67) * 5.0 / 9.0;
}
