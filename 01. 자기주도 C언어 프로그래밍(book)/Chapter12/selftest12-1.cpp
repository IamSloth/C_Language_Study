/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page242, selfTest 11-1

This code is just for studying.
This code was written on April 13, 2022.
by IamSloth

****************************************************/


/** ���� **
10 ������ �ڿ��� n�� �Է¹ް� n���� ������ �Է¹޾�
������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�迭�� �����ϴ� �Լ��� �̿��Ѵ�.

�Է� ��) 4
		 10 9 2 15

��� ��) 15 10 9 2 

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