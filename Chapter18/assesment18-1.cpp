/***************************************************

자기주도 C언어 프로그래밍
Page394, assesment 18-1

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** 문제 **
실수 2개를 입력받아 합계를 구하고 각각 소수 셋째 자리에서 반올림하여
둘째 자리까지 한 줄에 출력하시오.

입력 예)
80.504 22.34

출력 예)
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


