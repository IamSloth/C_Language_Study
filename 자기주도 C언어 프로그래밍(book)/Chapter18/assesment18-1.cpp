/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page394, assesment 18-1

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** ���� **
�Ǽ� 2���� �Է¹޾� �հ踦 ���ϰ� ���� �Ҽ� ��° �ڸ����� �ݿø��Ͽ�
��° �ڸ����� �� �ٿ� ����Ͻÿ�.

�Է� ��)
80.504 22.34

��� ��)
80.50 22.34 102.84
*/

#include <stdio.h>

int main()
{
	float f[3];

	FILE* myFileIn = fopen(".\\temp\\in.txt", "r");
	FILE* myFileOut = fopen(".\\temp\\out.txt", "w");
	
	fscanf(myFileIn,"%f %f", &f[0], &f[1]);
	f[2] = f[0] + f[1];

	fprintf(myFileOut, "%.2f %.2f %.2f\n", f[0], f[1], f[2]);

	fclose(myFileIn);
	fclose(myFileOut);

	return 0;
}


