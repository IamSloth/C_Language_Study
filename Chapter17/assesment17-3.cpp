/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page373, assesment 17-3

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
�� ���� ������ p1, p2, p3 ������ �����ϰ� ���� �޸� ������ Ȯ���� ��,
p1 �� p2 �̿��Ͽ� �� ���� ������ �Է¹ް� p3�� �̿��Ͽ� �Է¹��� �� ���� ���� ���밪�� ������ ��
����ϴ� ���α׷��� �ۼ��Ͻÿ�

�Է� ��)
15 25

��� ��)
10
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int* p1 = new int;
	int* p2 = new int;
	int* p3 = new int;

	scanf("%d %d", p1, p2);

	*p3 = abs((*p1) - (*p2));

	printf("%d\n", *p3);

	return 0;
}


