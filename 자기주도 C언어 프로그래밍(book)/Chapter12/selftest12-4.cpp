/***************************************************
�ڱ��ֵ� C��� ���α׷���
Page248, selftset 12-4

This code is just for studying.
This code was written on April 15, 2022.
by IamSloth

****************************************************/


/** ���� **
���� ���̸� �Է¹޾� �������� ���̸� �Ҽ� ��°�ڸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
���� ���� = ������ * ������ * 3.14 ���� �̿��Ͻÿ�

�Է� ��) 314
		 
��� ��) 10.00

*/

#include <stdio.h>
#include <math.h>

int main()
{
	float inputArea;
	float pi = 3.14;

	scanf("%f", &inputArea);
	printf("%.2f\n",sqrt((inputArea/pi)));

	return 0;
}