/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page372, selftest 17-7

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
�迭�� ũ�� N�� �Է¹��� �� N���� ������ �Է¹޾�
������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��)
4
15 23 100 38

��� ��)
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


