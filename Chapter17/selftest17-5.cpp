/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page366, selftest 17-5

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
�Ǽ� 5���� ���ҷ� �ϴ� �迭�� �����ϰ� ������ ������ �̿��Ͽ�
�Է°� ����� �����ϴ� ���α׷��� �ۼ��Ͻÿ�
����� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ����ϴ� ������ �Ѵ�.

�Է� ��) 10 25.3 1.05 0.78 100

��� ��)
10.0 25.3 1.1 0.8 100.0
*/

#include <stdio.h>
#include <math.h>

float round(float a)
{
	return a + 0.04;
}

int main()
{

	float num[5];
	float* p = num;

	for (int i = 0; i < 5; i++)
	{
		scanf("%f",p+i);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%.1f ", round(i[num]));
	}
	

	return 0;
}


