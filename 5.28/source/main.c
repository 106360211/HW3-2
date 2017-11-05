#include <stdio.h>
#include <stdlib.h>

char input;

int main()
{
	do
	{
		printf("請輸入一個英文字母:");
		input = getchar();
		if (input >= 'A' && input <= 'Z')
		{
			printf("小寫是:%c\n", tolower(input));
		}
		else
		{
			printf("大寫是:%c\n", toupper(input));
		}
	} while ((input != getchar()) != EOF);  //這裡有問題，希望老師或助教解釋為何不能正常動作

	system("pause");
	return 0;
}