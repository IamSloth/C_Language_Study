/***************************************************
�ڱ��ֵ� C��� ���α׷���
Page253, example 12-6

This code is just for studying.
This code was written on April 17, 2022.
by IamSloth

****************************************************/


/** ���� **
main �Լ� ������ ���ڸ� ������� ���� 1, 2, 3 �� ���� ���ڸ� �����Ͽ�
������ �� ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

�Է� ��) 
		 
��� ��) 1 + 1 = 2
		 1 + 2 = 3
		 1 + 3 = 4
		 2 + 1 = 3
		 2 + 2 = 4
		 2 + 3 = 5
		 3 + 1 = 4
		 3 + 2 = 5
		 3 + 3 = 6

*/

#include <stdio.h>

#define one 1
#define two 2
#define three 3

int main()
{
	for (int i = one; i <= three; i++)
	{
		for (int j = one; j <= three; j++)
		{
			printf("%d + %d = %d\n", i, j, i + j);
		}
	}
	return 0;
}