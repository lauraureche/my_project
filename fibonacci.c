#include <stdio.h>
int main()
{
	long fib[100] = {1,1};
	int n, i;

	printf("Dimensiunea vectorului");
	scanf("%d", &n);

	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i-1]+fib[i-2];
	}

	for (i = 0; i < n; i++)
	{
		printf("%ld", fib[i]);
	}

	return 0;
}
