/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page394, assesment 18-4

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** ���� **
���� n�� �Է¹޾� n!�� ���Ͽ� ����Ͻÿ�
(n<=10)

�Է� ��)
5

��� ��)
120

*/

#include <stdio.h>

int fac(int n)
{
	if (n <= 1)
		return 1;
			
	return n * fac(n - 1);
}

int main()
{
	FILE* in = fopen(".\\temp\\in.txt","r");
	FILE* out = fopen(".\\temp\\out.txt","w");

	int num = 0;
	fscanf(in,"%d", &num);

	fprintf(out,"%d",fac(num));
		
	fclose(in);
	fclose(out);

	return 0;
}


