/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page374, assesment 17-5

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
���� n�� �Է¹޾� n���� ������ �����迭�� �����ϰ� n���� ������ �Է¹޾�
�ִ밪�� �ּҰ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��)
5
15 90 8 36 25

��� ��)
max : 90
min : 8
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	scanf("%d", &num);

	int* p = new int[num];

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &p[i]);
	}

	int max = p[0];
	int min = p[0];

	for (int i = 1; i < num; i++)
	{
		if (max < p[i])
			max = p[i];

		if (min > p[i])
			min = p[i];
	}

	printf("min : %d\n", max);
	printf("min : %d\n", min);

	delete[]p;


	return 0;
}


