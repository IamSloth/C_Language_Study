/***************************************************

자기주도 C언어 프로그래밍
Page254, example 12-7

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
5개의 정수를 입력받아 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.

입력 예) 9 2 6 8 3

출력 예) 2 3 6 8 9
*/

#include <stdio.h>
#define N 5
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
			if (a[j] > a[j + 1])
			{
				SWAP(a[j], a[j + 1]);
			}
		}
	}
}

void output(int a[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int arr[N];
	input(arr);
	sort(arr);
	output(arr);
	return 0;
}
