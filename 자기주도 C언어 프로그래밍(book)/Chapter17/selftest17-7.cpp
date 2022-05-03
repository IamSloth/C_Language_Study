/***************************************************

자기주도 C언어 프로그래밍
Page372, selftest 17-7

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
배열의 크기 N을 입력받은 후 N개의 정수를 입력받아
내림차순으로 정렬하여 출력하는 프로그램을 작성하시오.

입력 예)
4
15 23 100 38

출력 예)
100 38 23 15
*/

#include <stdio.h>


int main()
{
	int num;
	scanf("%d", &num);

	int* p = new int[num];
	
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &p[i]);
		//scanf("%d", p + i);
	}

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (p[i] < p[j])
			{
				int temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d ", p[i]);
	}
	
	delete[]p;
	
	return 0;
}


