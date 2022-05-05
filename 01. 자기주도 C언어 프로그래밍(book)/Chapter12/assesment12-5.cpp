/***************************************************

자기주도 C언어 프로그래밍
Page262, assesment 12-5

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
세 개의 실수를 입력받아 합계와 평균을 구하여 평균을 반올림한 정수를 출력하고,
다음은 입력받은 수를 각각 먼저 반올림한 후 합계와 평균을 구하여
평균을 반올림한 한 결과를 출력하는 프로그램을 작성하시오.

입력 예) 153.74 34.59 109.5

출력 예) 99
		 100

*/

#include <stdio.h>
#include <math.h>

int round(float f)
{
	return f + 0.5;
}

int main()
{
	float f1, f2, f3, fsum, favg;
	int isum, iavg;
	
	scanf("%f %f %f", &f1, &f2, &f3);

	fsum = f1 + f2 + f3;
	favg = fsum / 3;
	printf("%d\n", round(favg));

	isum = round(f1) + round(f2) + round(f3);
	iavg = round((float)isum/3);
	printf("%d", iavg);

	return 0;
}

