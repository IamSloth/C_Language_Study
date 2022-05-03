/***************************************************

자기주도 C언어 프로그래밍
Page238, Assesment 11-4

This code is just for studying.
This code was written on April 8, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 개의 정수를 입력받아 큰 수의 제곱에서 작은 수의 제곱을 뺀 결과값을
출력하는 프로그램을 작성하시오.
(두 정수를 전달받아 제곱의 차를 리턴하는 함수를 이용할 것)

입력 예) 8 10
출력 예) 36
*/


#include <stdio.h>

int function()
{
	int num1, num2;
	scanf("%d %d",&num1,&num2);

	int result = (num1 * num1) - (num2 * num2); //일단 곱해서 뺌
	if (result < 0)								//음수면 
		result *= -1;							//-1곱하면 그만이야~

	return result;

}

int main()
{
	printf("%d\n", function());
	return 0;
}
