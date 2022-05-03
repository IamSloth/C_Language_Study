/***************************************************

자기주도 C언어 프로그래밍
Page367, example 17-6

This code is just for studying.
This code was written on April 20, 2022.
by IamSloth

****************************************************/


/** 문제 **
배열의 크기 N을 입력받아 정수포인터를 이용하여 N개의 동적배열을 생성하고
N개의 정수를 입력받아 입력받은 역순으로 출력하는 프로그램을 작성하시오.

입력 예)
5
15 23 86 94 38

출력 예)
38 94 86 23 15
*/

#include <stdio.h>
#include <string.h>


int main()
{
	int n;
	scanf("%d", &n);
	int* p = new int[n];
	

	for (int i = 0; i < n; i++)
	{
		scanf("%d", p+i);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d ", *(p+i));
	}

	printf("\n");
	delete[]p;

	return 0;
}
