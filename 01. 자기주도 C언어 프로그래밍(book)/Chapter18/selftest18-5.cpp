/***************************************************

자기주도 C언어 프로그래밍
Page389, example 18-5

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
100 이하의 정수 N을 입력받은 후 공백이 포함된 N행의 문장을 입력받아서
역순으로 출력하는 프로그램을 작성하시오
각 문장의 길이는 100 이하이다.
표준 입출력으로 작성해야 채점이 됩니다
*

입력 예)
3
I love korea.
My name is chulgi.
I'm happy.


출력 예)

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


