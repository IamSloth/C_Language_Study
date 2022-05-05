/***************************************************

자기주도 C언어 프로그래밍
Page389, example 18-5

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
정수 N을 입력받고 N명의 이름과 나이 그리고 공백을 포함한 메모를 입력받아
그 정보를 아래와 같이 출력하는 프로그램을 작성하시오. 
(1<= N <= 10, 메모의 길이는 200 미만)

입력 예)
2
이동현 15
2018 한국정보올림피아드 전국대회 대상
배근우 19
2013 국제정보올림피아드 금상


출력 예)

이름 : 이동현
나이 : 15 세
수상실적 : 2018 한국정보올림피아드 전국대회 대상

이름 : 배근우
나이 : 19 세
수상실적 : 2013 국제정보올림피아드 금상

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
		fprintf(out, "이름 : %s\n", p[i].name);
		fprintf(out, "나이 : %d\n", p[i].age);
		fprintf(out, "수상실적 : %s\n", p[i].memo);
	}


	delete[]p;
	fclose(in);
	fclose(out);
	return 0;
}


