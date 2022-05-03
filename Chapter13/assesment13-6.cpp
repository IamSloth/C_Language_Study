/***************************************************

자기주도 C언어 프로그래밍
Page280, assesment 13-6

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
3자리로 이루어진 자연수 3개를 입력받아 그 수들의 곱을 구한 후,
그 결과값의 각 자리 숫자들중 0을 제외한 모든 수들의 곱을 구하여 출력하는 프로그램을 재귀함수로 작성하시오.

입력 예) 100 123 111

출력 예) 270

*/

#include <stdio.h>

int function(int i)
{
	int q = i / 10;
	int r = i % 10;
	
	if (r == 0)
		r = 1;

	if (q == 0)
		return 1;

	return r * function(q);

}

int main()
{
	int i,j,k;
	scanf("%d %d %d", &i, &j, &k);
	int N = i * j * k;

	printf("%d", function(N));
	return 0;
}


