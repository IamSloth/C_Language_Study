/***************************************************

자기주도 C언어 프로그래밍
Page211, Assesment 10-1

This code is just for studying.
This code was written on April 5, 2022.
by IamSloth

****************************************************/


/** 문제 **
가람이는 주사위 놀이를 하다가 주사위를 10번 던져서 각 숫자가 몇 번씩 나왔는지 알아보려고 한다.
한번 던질 때마다 나온 주사위의 숫자를 입력받아서 숫자가 몇 번씩 나왔는지 출력하는 프로그램을 작성하시오.

입력 예) 5 6 3 4 5 5 2 2 4 6

출력 예) 1 : 0
		 2 : 2
		 3 : 1
		 4 : 2
		 5 : 3
		 6 : 2
*/


#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int count[7] = {0};
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &inputNum);
		count[inputNum]++;
	}

	for (int i = 1; i < 7; i++)
	{
		printf("%d : %d\n", i, count[i]);
	}

	return 0;
}