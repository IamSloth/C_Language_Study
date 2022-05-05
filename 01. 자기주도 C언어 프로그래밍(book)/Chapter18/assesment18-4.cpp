/***************************************************

자기주도 C언어 프로그래밍
Page394, assesment 18-4

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 n을 입력받아 n!을 구하여 출력하시오
(n<=10)

입력 예)
5

출력 예)
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


