#include <stdio.h>

int main()
{
	int c,i,j,state,nw,nc;
	int wc[20];
	nc = nw = state = 0;
	for(i = 0; i < 20; ++i)
		wc[i] = 0;
	while((c = getchar()) != EOF)
	{
		++nc;
		if (c == ' '||c == '\t' || c == '\n')
		{
			state = 0;
			wc[nw-1] = nc -1;
			nc = 0;
		}
		else if (state == 0)
		{
			state = 1;
			++nw;
		}
	}
	for (i =0; i < nw; ++i)
	{
		for ( j = 0; j < wc[i]; ++j)
			printf("1");
		printf("\n");
	}

}
