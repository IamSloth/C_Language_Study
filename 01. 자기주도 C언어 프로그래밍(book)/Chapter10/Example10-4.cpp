/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page201, Example 10-4

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** ���� **
3�� 3���� �迭�� �����ϰ� �Ʒ��� ��� ���� ���� �ʱ�ȭ �� ��
Ǯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��) 
��� ��) 3 5 4
		 2 6 7
		 8 10 1
*/

#include <stdio.h>

int main()
{
	int num[3][3] = {
						{3, 5, 4},
						{2, 6, 7},
						{8, 10, 1}
					};
	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}