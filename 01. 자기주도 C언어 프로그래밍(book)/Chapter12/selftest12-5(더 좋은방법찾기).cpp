/***************************************************
�ڱ��ֵ� C��� ���α׷���
Page250, selftest 12-5

This code is just for studying.
This code was written on April 15, 2022.
by IamSloth

****************************************************/


/** ���� **
�� ���� �Ǽ��� �Է¹޾�
���� ū ���� �ø��� ������ ����ϰ�
���� ���� ���� ������ ������ ����� ��
���� ���� �ݿø��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�ԷµǴ� �Ǽ��� -1000 �̻� 1000 �����̴�.

�Է� ��) 3.45 51.48 -100.1
		 
��� ��) 52 -101 3

*/

#include <stdio.h>
#include <math.h>

int main()
{
	float num[3] = {0};
	bool isWhile = true;
	while (isWhile)
	{
		for (int i = 0; i < 3; i++)
		{
			scanf("%f", &num[i]);

			if (num[i] > 1000 || num[i] < -1000)
			{
				printf("�߸� �Է��߾��.\n");
				break;
			}

			else if (i == 2)
			{
				isWhile = false;
			}

		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (num[i] > num[j+1])
			{
				float temp = num[i];
				num[i] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	printf("%.0f %.0f %.0f",ceil(num[2]),floor(num[0]), floor(num[1]+0.5));
	return 0;
}