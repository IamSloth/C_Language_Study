/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page373, assesment 17-1

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
������ ������ �����ϰ� ������ ������ ����Ͽ� 100 ������ ���� �Է¹��� ��
�Է¹��� ����ŭ "*"�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��)
10

��� ��)
**********
*/

#include <stdio.h>


int main()
{
	int num;
	int* p = &num;

	scanf("%d", p);

	for (int i = 0; i < num; i++)
	{
		printf("*");
	}
	printf("\n");
		
	return 0;
}


