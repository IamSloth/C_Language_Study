/***************************************************

자기주도 C언어 프로그래밍
Page53, Assessment 2-1

This code is just for studying.
This code was written on March 10, 2022.
by IamSloth

****************************************************/

/** 문제 **
실수형 변수 2개를 선언하고 각각에 80.5, 22.34를 대입한 후
두 수의 합을 구하여 각각의 숫자를 10칸씩 오른쪽에 맞추어 소수 둘째자리까지 출력하는 프로그램을 작성하시오

출력 예) 80.50     22.34      102.84
*/

#include <stdio.h>

int main()
{
	float f1, f2;
	
	f1 = 80.5;
	f2 = 22.34;


	printf("\n");
	printf("%10.2f%10.2f%10.2f\n", f1, f2, f1+f2);

	return 0;
}