/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page373, assesment 17-4

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
10���� ���Ҹ� ������ �� �ִ� �迭�� ������ �� ������ ������ �̿��Ͽ� �ڷḦ �Է¹޾�
Ȧ���� ������ ¦���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��)
3 5 10 52 1 97 36 25 13 29

��� ��)
odd : 7
even : 3
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int num[10];
	int* p = num;
	int odd = 0;
	int even = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", p + i);
		if (*(p + i) % 2 == 0)
			even++;
		else
			odd++;
	}

	printf("odd : %d\n", odd);
	printf("even : %d\n", even);


	return 0;
}


