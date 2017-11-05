#include <stdio.h>
#include <stdlib.h>

int a, b;
int integerPower(int base, int exponent);

int main()
{
	printf("input 2 integer:");
	scanf("%d%d", &a, &b);
	printf("%d的%d次方是:%d", a, b, integerPower(a, b));

	system("pause");
	return 0;
}

integerPower(int base, int exponent)
{
	int x;
	if (exponent > 1)
	{
		x = base*integerPower(base, exponent - 1);
		return x;
	}
	else if (exponent==1)
	{
		x = a;
		return x;
	}
	else
	{
		return 1;
	}
	
}