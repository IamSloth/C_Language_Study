/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page194, Example 10-1

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** ���� **
1���� 10������ ������ �Է¹޴ٰ� �Էµ� ������ ������ �����
�� ������ 1�� �̻� �Էµ� �� ������ ������ ���� ������ ����ϴ�
���α׷��� �ۼ��Ͻÿ�.

�Է� ��) 5 6 10 9 3 5 3 5 0
��� ��) 3: 2��
		 5: 3��
		 6: 1��
		 9: 1��
		 10: 1��
*/

#include <stdio.h>

int main()
{
	printf("\n");

	int inputNum = 0;
	int count[11] = { 0 };

	while (1)
	{
		scanf("%d", &inputNum);

		if (inputNum < 1 || inputNum > 10)
		{
			break;
		}

		else
		{
			count[inputNum]++;
		}
	}

	for (int i = 1; i < 10; i++)
	{
		if (count[i] != 0)
		{
			printf("%d: %d��\n", i, count[i]);
		}
	}


	printf("\n");

	return 0;
}