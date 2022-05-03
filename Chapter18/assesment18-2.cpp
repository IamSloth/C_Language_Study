/***************************************************

자기주도 C언어 프로그래밍
Page394, assesment 18-1

This code is just for studying.
This code was written on April 28, 2022.
by IamSloth

****************************************************/


/** 문제 **
3개의 정수를 입력받아 합계와 평균을 구하여 출력하되
평균은 정수부분만 출력하고 나머지를 예와 같이 출력하시오.

입력 예)
36 85 100

출력 예)
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


