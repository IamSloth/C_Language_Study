/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page389, example 18-5

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
100 ������ ���� N�� �Է¹��� �� ������ ���Ե� N���� ������ �Է¹޾Ƽ�
�������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
�� ������ ���̴� 100 �����̴�.
ǥ�� ��������� �ۼ��ؾ� ä���� �˴ϴ�
*

�Է� ��)
3
I love korea.
My name is chulgi.
I'm happy.


��� ��)

I'm happy.
My name is chulgi.
I love korea.

*/

#include <stdio.h>
#include <string.h>

struct Data
{
	char ch[100];
};

int main()
{
	int N = 0;

	FILE* in = fopen(".\\temp\\in.txt","r");
	FILE* out = fopen(".\\temp\\out.txt","w");

	fscanf(in, "%d\n", &N);

	struct Data* p = new struct Data[N];

	for (int i = 0; i < N; i++)
	{
		fgets(p[i].ch, 100, in);
	}

	for (int i = N-1; i >= 0; i--)
	{
		if (i == N - 2)
		{
			printf("\n");
			fprintf(out, "\n");
		}
		fprintf(out, "%s", p[i].ch);
		printf("%s", p[i].ch);
	}
	delete[]p;
	fclose(in);
	fclose(out);

	return 0;
}


