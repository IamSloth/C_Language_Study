/***************************************************

자기주도 C언어 프로그래밍
Page226, Example 11-5

This code is just for studying.
This code was written on April 7, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 수를 입력받아 아래 예와 같이 순서를 바꾸어 출력하는 프로그램을 작성하시오.

입력 예) 두 수를 입력하세요. 35 15

출력 예) 첫 번째 함수 실행중 x = 15, y = 35
		 첫 번째 함수 실행후 a = 35, b = 15
	 	 두 번째 함수 실행중 x = 15, y = 35
	 	 두 번째 함수 실행후 a = 15, b = 35

*/


#include <stdio.h>

void swap(int num1, int num2);
void swap2(int &num1, int &num2);

int main()
{
	int inputNum[2];
	printf("두 수를 입력하세요.");
	scanf("%d %d", &inputNum[0], &inputNum[1]);
	
	printf("첫 번째 함수 실행중 x = %d, y = %d\n", inputNum[0], inputNum[1]);
	swap(inputNum[0], inputNum[1]);
	printf("첫 번째 함수 실행중 x = %d, y = %d\n", inputNum[0], inputNum[1]);

	printf("두 번째 함수 실행중 x = %d, y = %d\n", inputNum[0], inputNum[1]);
	swap2(inputNum[0], inputNum[1]);
	printf("두 번째 함수 실행중 x = %d, y = %d\n", inputNum[0], inputNum[1]);

	return 0;
}

void swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void swap2(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}