/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page197, Example 10-2

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** ���� **
������ �Է¹޴ٰ� 0�� �ԷµǸ� �������� �Էµ� 0�� �����ϰ�
�� ������ �Էµ� ������ ���� �ڸ� ���ڰ� ���� �� ������
���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (0���� ���ڴ� ������� �ʴ´�.)

�Է� ��) 10 55 123 63 85 61 125 0
��� ��) 0 : 1��
		 1 : 1��
		 3 : 2��
		 5 : 3��
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

		if (inputNum == 0)
		{
			break;
		}

		else
		{
			int i = inputNum % 10;
			count[i]++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (count[i] != 0)
		{
			printf("%d: %d��\n", i, count[i]);
		}
	}


	printf("\n");

	return 0;
}