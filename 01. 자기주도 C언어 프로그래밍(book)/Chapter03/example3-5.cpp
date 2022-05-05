/***************************************************

자기주도 C언어 프로그래밍
Page65, Example 3-5

This code is just for studying.
This code was written on March 11, 2022.
by IamSloth

****************************************************/

/** 문제 **

3개의 정수 a, b, c를 입력받아서 a와 b, b와 c를 각각 비교하여
같으면 1, 같지 않으면 0을 출력하고,
다음에는 같지 않으면 1, 같으면 0을 출력하는 프로그램을 작성하시오.

입력 예) 10 20 20 
출력 예) 0 1 1 0

*/

#include <stdio.h>

int main()
{
	printf("\n");

	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d %d %d %d", a==b, b==c, a!=b, b!=c);

	printf("\n");
	

	return 0;
}