#include <stdio.h>
#include <stdlib.h>

char input;

int main()
{
	do
	{
		printf("�п�J�@�ӭ^��r��:");
		input = getchar();
		if (input >= 'A' && input <= 'Z')
		{
			printf("�p�g�O:%c\n", tolower(input));
		}
		else
		{
			printf("�j�g�O:%c\n", toupper(input));
		}
	} while ((input != getchar()) != EOF);  //�o�̦����D�A�Ʊ�Ѯv�ΧU�и������󤣯ॿ�`�ʧ@

	system("pause");
	return 0;
}