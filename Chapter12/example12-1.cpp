/***************************************************

자기주도 C언어 프로그래밍
Page240, Example 11-1

This code is just for studying.
This code was written on April 13, 2022.
by IamSloth

****************************************************/


/** 문제 **
6개의 정수를 입력 받아 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.

입력 예) 9 2 6 8 3 4

출력 예) 2 3 4 6 8 9


*/

#include <stdio.h>

void input(int arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	
}

void output(int arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
}

void swap(int& x, int &y)
{
	int temp = x;
	x = y; 
	y = temp;
}

void sort(int arr[], int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
	}
}


int main()
{
	int arr[6];

	input(arr, 6);
	sort(arr, 6);
	output(arr, 6);
}