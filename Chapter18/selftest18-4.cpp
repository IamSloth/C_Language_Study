/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page385, selftest 18-3

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
������ ������ 100�� ������ ���ڿ��� �� �� �Է¹޾�
���̰� ���� ���ڿ��� �� ���ڿ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
ǥ�� ��������� �ۼ��ؾ� ä���� �˴ϴ�
*

�Է� ��)
Love, like you've never been hurt.
Live, like today is the lost day to live.

��� ��)

Love, like you've never been hurt.
Live, like today is the lost day to live.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char ch1[100] = { 0 };
	char ch2[100] = { 0 };

	FILE* in;
	in = fopen(".\\temp\\in.txt", "r");

	FILE* out;
	out = fopen(".\\temp\\out.txt", "w");
	
	fgets(ch1, 100, in);
	fgets(ch2, 100, in);

	if (strlen(ch1) > strlen(ch2))
	{
		fprintf(out, "%s\n", ch2);
		fprintf(out, "%s\n", ch1);
	}

	else
	{
		fprintf(out, "%s\n", ch1);
		fprintf(out, "%s\n", ch2);
	}

	fclose(in);
	fclose(out);

	return 0;
}


