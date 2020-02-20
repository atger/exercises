#include <stdio.h>

double fahrenheit_to_celsius(double fahr)
{
	double celsius;
	celsius = (5*(fahr-32))/9;
	return celsius;
}

int main()
{
	double i,c;
	printf("Fahrenheit to Celsius\n");
	for(i = 0; i <= 300; i += 20)
	{
	       c = fahrenheit_to_celsius(i);
               printf("%0.0f to %0.2f\n",i,c);	
	}
}
