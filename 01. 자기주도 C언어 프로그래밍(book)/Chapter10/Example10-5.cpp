/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page203, Example 10-5

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** ���� **
3�� 3���� �迭 �� ���� ���� �Է��� �ް�
�� �迭�� ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��)
��� ��) ù ��° �迭 1�� 1 2 3
		 ù ��° �迭 2�� 4 5 6 
		 ù ��° �迭 3�� 7 8 9
		 �� ��° �迭 1�� 9 6 3
		 �� ��° �迭 2�� 8 5 2
		 �� ��° �迭 3�� 7 4 1
*/

#include <stdio.h>

int main()
{
	int num1[3][3] = { {0} };
	int num2[3][3] = { {0} };

	for (int i = 0; i < 3; i++)
	{	
		printf("ù ��° �迭 %d �� ", i+1);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &num1[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("�� ��° �迭 %d �� ", i+1);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &num2[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			num1[i][j] += num2[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", num1[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}