

/***************************************************

자기주도 C언어 프로그래밍
Page143, Self Test 7-7

This code is just for studying.
This code was written on March 25, 2022.
by IamSloth

****************************************************/

/** 문제 **
아래와 같이 출력되는 프로그램을 작성하시오.

출력 예) 2 3 4 5 6
		 3 4 5 6 7
		 4 5 6 7 8
		 5 6 7 8 9
		 6 7 8 9 10
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int k = 2;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", k);
			k++;
		}
		printf("\n");
		k -= 4;
	}
	

	printf("\n");

	return 0;

}