#include <stdio.h>

int main()
{
	int c,i,j,tl;
	tl = 'z'-'a';
	int carr[tl];
	for(i = 0; i < tl; ++i)
		carr[i] = 0;
	while((c = getchar()) != EOF)
	{
		if (c > 'a' && c < 'z')
			i = c-'a';
			++carr[i];
	}
	for(i = 0; i < tl; ++i)
	{
	    for(j = 0; j < carr[i]; ++j)
		    printf("1");
	    printf("\n");
	}
}
