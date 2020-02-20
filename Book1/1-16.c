#include <stdio.h>

int getline(char s[],int limit);
void copy(char to[], char from[]);

int main()
{
	int len;
	char line[1000];
	char longest[1000];
	while((len = getline(line,1000)) != 0)
	{
		printf("Line Length : %d",len);
	}
}

int getline(char s[], int limit)
{
	int i,c;
	for(i = 0; i < limit-1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[],char from[])
{
	int i;
	for(i = 0; from[i] != '\0'; ++i)
		to[i] = from[i];
	to[i] = '\0';
}
