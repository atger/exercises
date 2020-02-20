#include <stdio.h>

int main()
{
	int c;
	int space = 0;
	while((c = getchar())!=EOF)
	{
		if (c == ' '|| c == '\t')
		{
			++space;
		        if (space == 1)
				putchar('\n');
		}
		else {
			space = 0;
			putchar(c);
		}
	}
}
