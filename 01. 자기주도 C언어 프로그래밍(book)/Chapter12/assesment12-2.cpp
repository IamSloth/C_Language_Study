/***************************************************

자기주도 C언어 프로그래밍
Page261, assesment 12-2

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 개의 양의 실수를 입력받아 각각의 제곱근을 구하고
구해진 두 수를 포함하여 그 사이에 존재하는 정수의 개수를 출력하는 프로그램을 작성하시오.

입력 예) 12.0 34.789

출력 예) 2

*/

#include <stdio.h>
#include <math.h>




int main()
{
	float inputNum1, inputNum2;
	int count = 0;
	scanf("%f %f", &inputNum1, &inputNum2);

	inputNum1 = sqrt(inputNum1);
	inputNum2 = sqrt(inputNum2);

	if (inputNum2 > inputNum1) //num1 큰수만들기
	{
		float temp = inputNum2;
		inputNum2 = inputNum1;
		inputNum1 = temp;
	}

	inputNum1 = floor(inputNum1); // 큰수는 내림
	inputNum2 = ceil(inputNum2); // 작은수는 올림

	count = (int)inputNum1 - (int)inputNum2 + 1; // 갯수계산

	printf("%d\n", count);

	return 0;
}

