/***************************************************

자기주도 C언어 프로그래밍
Page374, assesment 17-5

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 n을 입력받아 n개의 정수형 동적배열을 생성하고 n개의 정수를 입력받아
최대값과 최소값을 출력하는 프로그램을 작성하시오.

입력 예)
5
15 90 8 36 25

출력 예)
max : 90
min : 8
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	scanf("%d", &num);

	int* p = new int[num];

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &p[i]);
	}

	int max = p[0];
	int min = p[0];

	for (int i = 1; i < num; i++)
	{
		if (max < p[i])
			max = p[i];

		if (min > p[i])
			min = p[i];
	}

	printf("min : %d\n", max);
	printf("min : %d\n", min);

	delete[]p;


	return 0;
}


