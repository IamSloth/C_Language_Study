/***************************************************

자기주도 C언어 프로그래밍
Page379, selftest 18-1

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 개의 정수를 입력받아 작은 수부터 큰 수까지 모든 정수의 합을 구하여 출력하는 프로그램을 작성하시오.
표준 입출력으로 작성해야 채점이 됩니다.

입력 예)
5 10

출력 예)
45
*/

#include <stdio.h>

int main()
{
	FILE* in;
	FILE* out;

	in = fopen("input.txt", "r");
	out = fopen("output.txt", "w");

	int num1, num2;
	int sum = 0;

	fscanf(in, "%d %d", &num1, &num2);

	for (int i = num1; i <= num2; i++)
	{
		sum += i;
	}

	fprintf(out, "%d\n", sum);
	printf("%d\n", sum);

	fclose(in);
	fclose(out);

	return 0;
}


