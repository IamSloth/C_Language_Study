/***************************************************

자기주도 C언어 프로그래밍
Page365, example 17-5

This code is just for studying.
This code was written on April 20, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 배열과 문자열을 선언하고 정수포인터와 문자포인터에 각각의 주소를 대입한 후
아래와 같이 두 가지 방법으로 입력받아 출력하는 프로그램을 작성하시오.

입력 예)
11 22 33
50 40 30
abcde
ABCDE

출력 예)
11 22 33
50 40 30
abcde
ABCDE
*/

#include <stdio.h>
#include <string.h>


int main()
{
	int a[3];
	int* pi = a;
	char st[10];
	char* ps = st;

	for (int i = 0; i < 3; i++)
		scanf("%d", &pi[i]);
	for (int i = 0; i < 3; i++)
		printf("%d ", a[i]);
	printf("\n");

	for (int i = 0; i < 3; i++)
		scanf("%d", pi+i);
	for (int i = 0; i < 3; i++)
		printf("%d ", a[i]);
	printf("\n");

	scanf("%s", st);
	printf("%s \n", ps);
	scanf("%s", ps);
	printf("%s\n", st);

	return 0;
}
