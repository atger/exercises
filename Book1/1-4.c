#include <stdio.h>

int main()
{
	double celsius,fahrenheit;
	int lower,upper,step;
	lower = 0;
	upper = 100;
	step = 10;

	printf("Celsius\tFahrenheit\n");
	while(lower <= upper)
	{
	        celsius = lower;
		fahrenheit = ((9*celsius)/5)+32;
		printf("%.0f\t%.2f\n",celsius,fahrenheit);
		lower += step;
	}
}
