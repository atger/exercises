#include <stdio.h>

int main()
{
	int c,space;
	space = 0;
	while((c = getchar()) != EOF)
	{
		if (c == ' ')
		{	
			space += 1;
		        if (space == 1)
			    putchar(c);
		} else {
			space = 0;
			putchar(c);
		}
	}
}
