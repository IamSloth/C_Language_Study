/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page379, selftest 18-1

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
�� ���� ������ �Է¹޾� ���� ������ ū ������ ��� ������ ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
ǥ�� ��������� �ۼ��ؾ� ä���� �˴ϴ�.

�Է� ��)
5 10

��� ��)
45
*/

#include <stdio.h>

int main()
{
	FILE* in;
	FILE* out;

	in = fopen("input.txt", "r");
	out = fopen("output.txt", "w");

	int num1, num2;
	int sum = 0;

	fscanf(in, "%d %d", &num1, &num2);

	for (int i = num1; i <= num2; i++)
	{
		sum += i;
	}

	fprintf(out, "%d\n", sum);
	printf("%d\n", sum);

	fclose(in);
	fclose(out);

	return 0;
}


