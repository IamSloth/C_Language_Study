/***************************************************

자기주도 C언어 프로그래밍
Page262, assesment 12-6

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
자료의 개수 7을 매크로 상수로 정의하여 자료의 개수만큼 정수를 입력받아 입력받은 순서대로 앞에서부터
마지막까지 가면서 바로 뒤의 숫자와 비교하여 크면 교환한다
이러한 작업을 세 번 반복한 후 그 결과를 차례대로 출력하는 프로그램을 작성하시오.

입력 예) 15 20 41 8 26 33 19

출력 예) 8 15 20 19 26 33 41

*/

#include <stdio.h>
#include <math.h>
#define NUM 7



int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i < NUM; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i <= 3; i++)
	{
		for (int j = 0; j < NUM-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < NUM; i++)
	{
		printf("%d ", arr[i]);
	}
	

	return 0;
}

