#include <stdio.h>

int main()
{
	double celsius,fahrenheit;
	printf("Fahrenheit\tCelsius\n");
	for(fahrenheit = 0; fahrenheit <=300; fahrenheit+=20)
	{	
		celsius = (5*(fahrenheit - 32))/9;
		printf("%.0f\t%2.2f\n",fahrenheit,celsius);
	}

}
