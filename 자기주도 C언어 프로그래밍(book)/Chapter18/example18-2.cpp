/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page376, example 18-1

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
���� ������Ʈ ������ ������ "temp" ������ �����ϰ� "temp" ������ "in.txt" ���Ϸκ���
10���� ������ �Է¹޾� ¦�� ��° �Է¹��� ������ "temp" ������ "out.txt" ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��)
15 23 1 100 35 99 123 20 5 456

��� ��)
23 100 99 20 456
*/

#include <stdio.h>

int main()
{
	FILE* in;
	FILE* out;

	in = fopen(".//temp//in.txt", "r");
	out = fopen(".//temp//output.txt", "w");

	int num[11];

	for (int i = 1; i <= 10; i++)
	{
		fscanf(in, "%d", &num[i]);
	}
	
	for (int i = 2; i <= 10; i += 2)
	{
		fprintf(out, "%d ", num[i]);
		printf("%d ", num[i]);
	}

	fclose(in);
	fclose(out);

	return 0;
}


