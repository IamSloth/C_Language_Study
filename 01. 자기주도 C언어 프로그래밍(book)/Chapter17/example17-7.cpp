/***************************************************

자기주도 C언어 프로그래밍
Page369, example 17-7

This code is just for studying.
This code was written on April 20, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 정수를 입력받아 값을 바꾸어 출력하고
5개의 정수를 {1, 3, 9, 4, 2}로 초기화한 후
오름차순으로 정렬하여 출력하는 프로그램을 작성하시오
참조에 의한 전달을 이용한 함수로 작성할 것

입력 예)
3 5

출력 예)
5 3
1 2 3 4 9
*/

#include <stdio.h>
#include <string.h>

void swap(int& x, int& y)
{
	int temp = x;
	x = y; 
	y = temp;
}

void sort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
}

int main()
{
	int num1, num2;
	int arr[5] = { 1, 3, 9, 4, 2 };

	scanf("%d %d", &num1, &num2);
	swap(num1, num2);
	printf("%d %d\n", num1, num2);

	sort(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
		
	return 0;
}
