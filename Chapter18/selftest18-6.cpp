/***************************************************

자기주도 C언어 프로그래밍
Page392, selftest 18-6

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
원의 둘레의 길이를 입력받아 반지름의 길이를 출력하는 작업을
0이 입력될 때까지 반복하는 프로그램을 작성하시오.
원주율은 3.14로 하고 출력은 반올림하여 소수 둘째자리까지 한다
표준 입출력으로 작성해야 채점이 됩니다
*
.

입력 예)
31.4
62.8
0

출력 예)

5.00
10.00

*/

#include <stdio.h>
#include <string.h>

#define PI 3.14

int main()
{
	freopen(".\\temp\\in.txt","r",stdin);
	freopen(".\\temp\\out.txt","w",stdout);

	float round;
	float radius;

	while (1)
	{
		scanf("%f\n", &round);
		if (round == 0)
			break;

		radius = round / 2 / PI;
		printf("%.2f\n", radius);
	}


	return 0;
}


