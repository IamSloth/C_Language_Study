/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page360, selftest 17-2

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
������ �����͸� �̿��Ͽ� ���� �Է¹ް� �Է¹��� ���� 10���� ���� ��� ��������
����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��) 123

��� ��)
12...3

*/

#include <stdio.h>

int main()
{

	int* p = new int;

	scanf("%d", p);

	printf("%d ... %d", *p/10, *p%10);
	delete p;
	return 0;
}


