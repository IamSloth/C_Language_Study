/***************************************************

자기주도 C언어 프로그래밍
Page366, selftest 17-5

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
배열의 크기 N을 입력받아 N개의 실수 배열을 생성하고 배열의 원소를 입력받은 후
입력받은 자료 및 합과 평균을 반올림하여 소수 둘째자리까지 출력하는 프로그램을 작성하시오.

입력 예)
4
15 23.6 100.35 0.388

출력 예)
15.00 23.60 100.35 0.39
hap : 139.34
avg : 34.83
*/

#include <stdio.h>


int main()
{
	int num;
	scanf("%d", &num);
	float* p = new float[num];
	float sum = 0;
	float avg = 0;

	for (int i = 0; i < num; i++)
	{
		scanf("%f", (p + i));
		//scanf("%f", &p[i]);
		sum += *(p + i);
	}

	avg = sum / num;

	for (int i = 0; i < num; i++)
	{
		printf("%.2f ", p[i]);
		//printf("%d ", *(p + i));
	}
	printf("\n\n");
	printf("sum : %.2f\n",sum);
	printf("avg : %.2f\n",avg);
	
	delete[]p;

	return 0;
}


