/***************************************************

자기주도 C언어 프로그래밍
Page264, Example 13-1

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
반복문을 사용하지 않고 자신의 이름을 10번 출력하는 프로그램을 작성하시오.

입력 예)

출력 예)
홍길동
홍길동
...
홍길동

*/

#include <stdio.h>

void output(int n)
{
	if (n < 1)
		return;

	printf("임종권\n");
	output(n - 1);
}

int main()
{
	output(10);
	return 0;
}