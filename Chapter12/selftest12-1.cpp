/***************************************************

자기주도 C언어 프로그래밍
Page242, selfTest 11-1

This code is just for studying.
This code was written on April 13, 2022.
by IamSloth

****************************************************/


/** 문제 **
10 이하의 자연수 n을 입력받고 n개의 정수를 입력받아
내림차순으로 정렬하여 출력하는 프로그램을 작성하시오.
배열을 전달하는 함수를 이용한다.

입력 예) 4
		 10 9 2 15

출력 예) 15 10 9 2 

*/

#include <stdio.h>
int sscan()
{
	int i = 0;
	scanf("%d", &i);
	return i;
}

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
			if (arr[i] < arr[j])
				swap(arr[i], arr[j]);
		}
	}
}


int main()
{
	int arr[10];
	int cnt = sscan();

	input(arr, cnt);
	sort(arr, cnt);
	output(arr, cnt);
}