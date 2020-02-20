#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 10

int main()
{
	double celsius,fahr;
	printf("Fahrenheit\tCelsius\n");
	for(fahr = UPPER; fahr >= LOWER; fahr -= STEP)
	{
		celsius = (5*(fahr - 32))/9;
		printf("%.0f\t%.2f\n",fahr,celsius);
	}
}
