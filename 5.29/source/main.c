#include <stdio.h>
#include <stdlib.h>

int i, j;
int gcd(int i, int j); //�̤j���]��
int lcm(int i, int j); //�̤p������

int main()
{
	printf("input 2 integer:");
	scanf("%d %d", &i, &j);
	printf("�̤j���]��:%d\j", gcd(i, j));
	printf("�̤p������:%d\j", lcm(i, j));

	system("pause");
	return 0;
}

int gcd(int i, int j)
{
	int k;
	while (j != 0)
	{
		k = i % j;
		i = j;
		j = k;
	}
	return i;
}

int lcm(int i, int j)
{
	int x;
	x = i * j / gcd(i, j);
	return x;
}

