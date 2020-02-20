#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
	int c;
	int nc,nw,nl,state;
	state = OUT;
	nc = nl = nw = 0;
	while((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("Lines : %d\nWords : %d\nChars : %d\n",nl,nw,nc);
}
