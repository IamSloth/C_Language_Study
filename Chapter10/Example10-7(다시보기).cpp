/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page205, Example 10-6

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** ���� **
�Ʒ��� ���� �Ľ�Į �ﰢ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Ľ�Į �ﰢ���� ù ��° �� ù ��°���� 1�� �ʱ�ȭ�� ��
���� �ٺ��ʹ� �ٷ� ���� ���� �ٷ� �� ������ ���� ���� ���� �ȴ�

�Է� ��) 
��� ��)	1
			1 1
			1 2 1
			1 3 3 1
			1 4 6 4 1
*/

#include <stdio.h>

int main()
{
	printf("\n");
	int pas[6][6] = { 0 };
	int i, j;

	pas[1][1] = 1;

	for (i = 2; i < 6; i++)
	{
		for (j = 1; j <= i; j++)
		{
			pas[i][j] = pas[i - 1][j - 1] + pas[i - 1][j];
		}
		
	}

	for ( i = 1; i < 6; i++)
	{
		for ( j = 1; j <= i; j++)
		{
			printf("%d ", pas[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

	return 0;
}