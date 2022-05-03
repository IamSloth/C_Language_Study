/***************************************************

자기주도 C언어 프로그래밍
Page381, selftest 18-2

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
10개의 실수를 입력받아 첫 번째 입력 값과 마지막 입력 값의 평균을 반올림하여
소수 첫째자리까지 출력하는 프로그램을 작성하시오.
표준 입출력으로 작성해야 채점이 됩니다*

입력 예)
15.3 123.5 0.69 85.12 3.0 51.9 100.1 1.58 5.5 10.5

출력 예)
12.9
*/

#include <stdio.h>

int main()
{
	FILE* input;
	FILE* output;

	input = fopen(".//temp//in.txt","r");
	output = fopen(".//temp//out.txt", "w");

	float fNum[10];
	float outNum;

	for (int i = 0; i < 10; i++)
	{
		fscanf(input, "%f", &fNum[i]);
	}

	outNum = (fNum[0] + fNum[9]) / 2;

	fprintf(output, "%.1f\n", outNum);
	printf("%.1f", outNum);

	fclose(input);
	fclose(output);
	
	return 0;
}


