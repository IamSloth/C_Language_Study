/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page396, assesment 18-10

This code is just for studying.
This code was written on April 29, 2022.
by IamSloth

****************************************************/


/** ���� **
10���� �ܾ �Է¹ް� ���� �ϳ��� �� �Է� ���� ��
���������� �Է¹��� ���ڸ� �����ϴ� �ܾ ��� ã�� ���� ������ ����Ͻÿ�.

�Է� ��)
hancom
korea
information
monitor
class
member
internet
bible
friends
forever
i

��� ��)
bible
friends
information
internet
monitor

*/

#include <stdio.h>
#include <string.h>

int main()
{
	FILE* in = fopen(".\\temp\\in.txt", "r");
	FILE* out = fopen(".\\temp\\out.txt", "w");

	char inCh[11][100];

	for (int i = 0; i < 11; i++)
	{
		fgets(inCh[i], 100, in);
	}

	char comCh = inCh[10][0];

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (strcmp(inCh[i], inCh[j]) == 1)
			{
				char temp[100];
				strcpy(temp, inCh[i]);
				strcpy(inCh[i], inCh[j]);
				strcpy(inCh[j], temp);
			}
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		int k = strlen(inCh[i]);
		for (int j = 0; j <= k; j++)
		{
			if (inCh[10][0] == inCh[i][j])
			{
				printf("%s", inCh[i]);
				fprintf(out, "%s", inCh[i]);
				break;
			}
		}
		
	}

	fclose(in);
	fclose(out);

	return 0;
}


