/***************************************************

자기주도 C언어 프로그래밍
Page257, selftest 12-7

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
10개의 정수를 입력받아 버블정렬로 내림차순 정렬을 하면서
하나의 단계가 끝날 때마다 그 정렬 결과를 출력하는 프로그램을 작성하시오.

입력 예) 15 93 26 8 43 10 25 88 75 19

출력 예) 93 26 15 43 10 25 88 75 19 8
		 93 26 43 15 25 88 75 19 10 8
		 93 43 26 25 88 75 19 15 10 8
		 93 43 26 88 75 25 19 15 10 8
		 93 43 88 75 26 25 19 15 10 8
		 93 88 75 43 26 25 19 15 10 8
		 93 88 75 43 26 25 19 15 10 8
		 93 88 75 43 26 25 19 15 10 8
		 93 88 75 43 26 25 19 15 10 8
*/

#include <stdio.h>
#define N 10
#define SWAP(x,y) {int z = x; x = y; y = z;}

void input(int a[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
}

void sort(int a[])
{
	int i, j;
	for (i = 1; i < N; i++)
	{
		for (j = 0; j < N - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				SWAP(a[j], a[j + 1]);
			}
			
		}
		for (int k = 0; k < N; k++)
			printf("%d ", a[k]);
		printf("\n");
	}
}

//void output(int a[])
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}

int main()
{
	int arr[N];
	input(arr);
	sort(arr);
	return 0;
}
