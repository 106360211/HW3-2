#include <stdio.h>
#include <stdlib.h>


int main()
{
	long n;
	long a1 = 0, a2 = 1, a3 = 1, i;
	
	printf("input an integer:");
	scanf("%ld", &n);

	if (n <= 2)
	{
		a3 = 1;
	}
	else
	{
		for (i = 3; i <= n; i++)
		{
			a1 = a2;
			a2 = a3;
			a3 = a1 + a2;
		}
	}
	if (a3 < a2)
	{
		printf("Sum=%ld \nn=%ld is the biggest Fibonacci", a3, n);
	}
	else
	{
		printf("Sum=%ld", a3);
	}
	system("pause");
	return 0;
}

