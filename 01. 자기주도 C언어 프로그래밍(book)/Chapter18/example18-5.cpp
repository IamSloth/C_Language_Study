/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page389, example 18-5

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
���� N�� �Է¹ް� N���� �̸��� ���� �׸��� ������ ������ �޸� �Է¹޾�
�� ������ �Ʒ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
(1<= N <= 10, �޸��� ���̴� 200 �̸�)

�Է� ��)
2
�̵��� 15
2018 �ѱ������ø��ǾƵ� ������ȸ ���
��ٿ� 19
2013 ���������ø��ǾƵ� �ݻ�


��� ��)

�̸� : �̵���
���� : 15 ��
������� : 2018 �ѱ������ø��ǾƵ� ������ȸ ���

�̸� : ��ٿ�
���� : 19 ��
������� : 2013 ���������ø��ǾƵ� �ݻ�

*/

#include <stdio.h>
#include <string.h>

struct Data
{
	char name[20];
	int age;
	char memo[200];
};

int main()
{
	int N = 0;

	FILE* in = fopen(".\\temp\\in.txt","r");
	FILE* out = fopen(".\\temp\\out.txt","w");

	fscanf(in, "%d", &N);
	struct Data* p = new struct Data[N];

	for (int i = 0; i < N; i++)
	{
		fscanf(in, "%s %d\n", p[i].name, &p[i].age);
		fgets(p[i].memo, 200, in);
	}

	for (int i = 0; i < N; i++)
	{
		fprintf(out, "�̸� : %s\n", p[i].name);
		fprintf(out, "���� : %d\n", p[i].age);
		fprintf(out, "������� : %s\n", p[i].memo);
	}


	delete[]p;
	fclose(in);
	fclose(out);
	return 0;
}


