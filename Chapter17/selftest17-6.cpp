/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page366, selftest 17-5

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
�迭�� ũ�� N�� �Է¹޾� N���� �Ǽ� �迭�� �����ϰ� �迭�� ���Ҹ� �Է¹��� ��
�Է¹��� �ڷ� �� �հ� ����� �ݿø��Ͽ� �Ҽ� ��°�ڸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��)
4
15 23.6 100.35 0.388

��� ��)
15.00 23.60 100.35 0.39
hap : 139.34
avg : 34.83
*/

#include <stdio.h>


int main()
{
	int num;
	scanf("%d", &num);
	float* p = new float[num];
	float sum = 0;
	float avg = 0;

	for (int i = 0; i < num; i++)
	{
		scanf("%f", (p + i));
		//scanf("%f", &p[i]);
		sum += *(p + i);
	}

	avg = sum / num;

	for (int i = 0; i < num; i++)
	{
		printf("%.2f ", p[i]);
		//printf("%d ", *(p + i));
	}
	printf("\n\n");
	printf("sum : %.2f\n",sum);
	printf("avg : %.2f\n",avg);
	
	delete[]p;

	return 0;
}


