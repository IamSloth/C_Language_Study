/***************************************************

자기주도 C언어 프로그래밍
Page236, Selftest 11-8

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
10 이하의 두 개의 정수를 입력받아서
작은 수부터 큰 수까지의 구구단을 차례대로 출력하는 프로그램을 구조화하여 작성하시오.

입력 예) 3 5

출력 예) 

== 3dan ==
3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
3 * 4 = 12
3 * 5 = 15
3 * 6 = 18
3 * 7 = 21
3 * 8 = 24
3 * 9 = 27

== 4dan ==
4 * 1 = 4
:
:
:
5 * 8 = 40
5 * 9 = 45

*/


#include <stdio.h>

void input(int &a, int &b);
void output(int i);

int main()
{
	int a, b, i;


	input(a,b);
	for (i = a; i <= b; i++)
	{
		output(i);
	}

	return 0;
}

void input(int &a, int &b)
{
	//int num1; int num2;
	scanf("%d %d", &a, &b);
}

void output(int i)
{
	printf("== %d단 ==\n", i);
	for (int j = 1; j <= 9; j++)
	{		
		printf("%d * %d = %d\n", i, j, i * j);
		
	}
	printf("\n");
}