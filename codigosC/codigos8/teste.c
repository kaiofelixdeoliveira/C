#include <stdio.h>

int letra(char c)
{
	if(c < '0' || c > '9')
		return 1;
	return 0;
}

int main(int argc, char *argv[])
{
	printf("%d\n", letra('8'));
	return 0;
}