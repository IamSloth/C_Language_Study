/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page394, assesment 18-1

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** ���� **
3���� ������ �Է¹޾� �հ�� ����� ���Ͽ� ����ϵ�
����� �����κи� ����ϰ� �������� ���� ���� ����Ͻÿ�.

�Է� ��)
36 85 100

��� ��)
221 73...2
*/

#include <stdio.h>

int main()
{
	FILE* myFileIn = fopen(".\\temp\\in.txt","r");
	FILE* myFileOut = fopen(".\\temp\\out.txt","w");
	int num[3];
	int sum = 0;
	int avg = 0;
	int r = 0;

	fscanf(myFileIn, "%d %d %d", &num[0], &num[1], &num[2]);

	sum = num[0] + num[1] + num[2];
	avg = sum / 3;
	r = sum % 3;

	fprintf(myFileOut, "%d %d ... %d", sum, avg, r);

	fclose(myFileIn);
	fclose(myFileOut);

	return 0;
}


