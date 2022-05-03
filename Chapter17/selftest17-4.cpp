/***************************************************

자기주도 C언어 프로그래밍
Page364, selftest 17-4

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
5개짜리 정수형 배열을 선언하고 포인터 변수에 저장한 후,
포인터 변수를 이용하여 입력을 받은 후 홀수번째 입력값을 출력하는 프로그램을 작성하시오.

입력 예) 1 15 23 9 12

출력 예)
1 23 12
*/

#include <stdio.h>

int main()
{

	int num[5];
	int* p = num;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d",p+i);
	}

	for (int i = 0; i < 5; i+=2)
	{
		printf("%d ", i[num]);
	}
	
	return 0;
}


