/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page396, assesment 18-9

This code is just for studying.
This code was written on April 29, 2022.
by IamSloth

****************************************************/


/** ���� **
������ ������ �� ������ �Է¹޾Ƽ� ��ü ���̿� ���� �� �ܾ ����Ͻÿ�.
�� �ִ� 100�� �̳��̰� ���̰� ���� �� �ܾ ���� ���� ��� �������� �и��Ͽ�
�� �ٿ� ������� ��� ����Ѵ�.

�Է� ��)
The largest organ in the body is the liver.

��� ��)
43
largest

*/

#include <stdio.h>
#include <string.h>

int main()
{
	FILE* in = fopen(".\\temp\\in.txt", "r");
	FILE* out = fopen(".\\temp\\out.txt", "w");

	char ch[101];
	fgets(ch, 101, in);

	int len = strlen(ch);

	char divCh[50][50] = { 0 };

	int divStep1 = 0;
	int divStep2 = 0;
	int chStep = 0;
	while (1)
	{
		if (chStep > len)
		{
			break;
		}

		if (ch[chStep] == ' ')
		{
			chStep++;
			divStep1++;
			divStep2 = 0;
		}

		divCh[divStep1][divStep2] = ch[chStep];
		chStep++;
		divStep2++;
	}

	char* maxCh = divCh[0];

	for(int i = 1; i < chStep; i++)
	{
		if(strlen(maxCh) < strlen(divCh[i]))
		{
			maxCh = divCh[i];
		}
	}

	fprintf(out, "%d\n%s\n", len, maxCh);

	fclose(in);
	fclose(out);

	return 0;
}


