/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page364, selftest 17-4

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
5��¥�� ������ �迭�� �����ϰ� ������ ������ ������ ��,
������ ������ �̿��Ͽ� �Է��� ���� �� Ȧ����° �Է°��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��) 1 15 23 9 12

��� ��)
1 23 12
*/

#include <stdio.h>

int main()
{

	int num[5];
	int* p = num;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d",p+i);
	}

	for (int i = 0; i < 5; i+=2)
	{
		printf("%d ", i[num]);
	}
	
	return 0;
}


