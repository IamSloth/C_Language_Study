/***************************************************

자기주도 C언어 프로그래밍
Page243, exmaple 12-2

This code is just for studying.
This code was written on April 13, 2022.
by IamSloth

****************************************************/


/** 문제 **
3과목의 점수를 입력 받아서
평균이 60미만이거나 1과목이라도 40점 미만이 있으면 "불합격" 아니면 "합격"
이라는 메시지를 아래와 같이 출력하는 프로그램을 작성하시오.

입력 예) 3과목의 점수를 입력하세요. 95 77 80

출력 예) 축하합니다. 합격입니다. 

*/

#include <stdio.h>

void input(int arr[], int num)
{
	printf("3과목의 점수를 입력하세요. ");
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
}

bool pass(int arr[], int num)
{
	int sum = 0;
	int avg;

	for (int i = 0; i < num; i++)
	{
		if (arr[i] < 40)
			return false;
		sum += arr[i];
	}
	avg = sum / num;
	
	if (avg < 60)
		return false;

	return true;
}

void output(bool isPass)
{
	if (isPass == true)
		printf("축하합니다. 합격입니다.\n");
	else
		printf("죄송합니다. 불합격입니다.\n");
}

int main()
{
	int arr[3];

	input(arr, 3);
	output(pass(arr, 3));
}