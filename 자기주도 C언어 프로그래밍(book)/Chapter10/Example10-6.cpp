/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page205, Example 10-6

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** ���� **
�л� 3���� ����, ����, ���� ������ �Է¹޾� �л��� ������ ���� �հ踦
�Ʒ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��) 1��° �л��� ���� 95 100 88
		 2��° �л��� ���� 85 60 93
		 3��° �л��� ���� 66 99 88

��� ��)	���� ���� ���� ����
		1��  95  100   88	283
		2��  85   60   93   238
		3��  66   99   88   253
	   �հ�  246  259  269  774
*/

#include <stdio.h>

int main()
{
	int score[4][4] = { {0} };

	for (int i = 0; i < 3; i++)
	{	
		printf("%d��° �л��� ���� ", i+1);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			score[i][3] += score[i][j];
		}

		for (int j = 0; j < 3; j++)
		{
			score[3][i] += score[j][i];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		score[3][3] += score[3][i];
	}

	printf("\t����\t����\t����\t����\n");
	

	for (int i = 0; i < 4; i++)
	{
		
		if (i == 3)
		{
			printf("�հ�\t");
		}

		else
		{
			printf("%d��\t", i + 1);
		}
		for (int j = 0; j < 4; j++)
		{
			printf("%3d\t", score[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}