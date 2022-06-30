#include <stdio.h>

int main(void)
{
	char x;
	int n;
	long int d;
	long long int l;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(x));
	printf("Size of an int: %i byte(s)\n", sizeof(n));
	printf("Size of a long int: %i byte(s)\n", sizeof(d));
	printf("Size of a long long int: %i byte(s)\n", sizeof(l));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return(0);

}
