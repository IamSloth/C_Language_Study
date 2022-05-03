/***************************************************

자기주도 C언어 프로그래밍
Page373, assesment 17-1

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수형 변수를 선언하고 포인터 변수를 사용하여 100 이하의 수를 입력받은 후
입력받은 수만큼 "*"을 출력하는 프로그램을 작성하시오.

입력 예)
10

출력 예)
**********
*/

#include <stdio.h>


int main()
{
	int num;
	int* p = &num;

	scanf("%d", p);

	for (int i = 0; i < num; i++)
	{
		printf("*");
	}
	printf("\n");
		
	return 0;
}


