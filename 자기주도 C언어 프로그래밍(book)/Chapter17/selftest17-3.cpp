/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page362, selftest 17-3

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
������ ���� �� ���� �̿��Ͽ� �� ���� �Է¹ް� ��Ģ ������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��) 35 6

��� ��)
35 + 6 = 41
35 - 6 = 29
35 * 6 = 210
35 / 6 = 5
*/

#include <stdio.h>

int main()
{

	int* p1 = new int;
	int* p2 = new int;

	scanf("%d %d", p1,p2);

	printf("%d + %d = %d\n", *p1, *p2, (*p1) + (*p2) );
	printf("%d - %d = %d\n", *p1, *p2, (*p1) - (*p2));
	printf("%d * %d = %d\n", *p1, *p2, (*p1) * (*p2));
	printf("%d / %d = %d\n", *p1, *p2, (*p1) / (*p2));

	delete p1;
	delete p2;
	return 0;
}


