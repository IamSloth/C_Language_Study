/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page392, selftest 18-6

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
���� �ѷ��� ���̸� �Է¹޾� �������� ���̸� ����ϴ� �۾���
0�� �Էµ� ������ �ݺ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
�������� 3.14�� �ϰ� ����� �ݿø��Ͽ� �Ҽ� ��°�ڸ����� �Ѵ�
ǥ�� ��������� �ۼ��ؾ� ä���� �˴ϴ�
*
.

�Է� ��)
31.4
62.8
0

��� ��)

5.00
10.00

*/

#include <stdio.h>
#include <string.h>

#define PI 3.14

int main()
{
	freopen(".\\temp\\in.txt","r",stdin);
	freopen(".\\temp\\out.txt","w",stdout);

	float round;
	float radius;

	while (1)
	{
		scanf("%f\n", &round);
		if (round == 0)
			break;

		radius = round / 2 / PI;
		printf("%.2f\n", radius);
	}


	return 0;
}


