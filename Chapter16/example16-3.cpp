/***************************************************

자기주도 C언어 프로그래밍
Page337, example 16-3

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 명의 이름과 국어 영어 점수를 입력받아 합계를 구하여 모두 출력하는 프로그램을 작성하시오.

입력 예)
이동현 88 100
전정원 95 96

출력 예)
이동현 88 100
전정원 95 96
합계 183 196

*/

#include <stdio.h>
#include <string.h>

struct student
{
	char name[30];
	int korean;
	int english;
}std1, std2, res;

struct student output(struct student a, struct student b)
{
	struct student sum;

	strcpy(sum.name, "합계");
	sum.english = a.english + b.english;
	sum.korean = a.korean + b.korean;

	return sum;
}


int main()
{
	scanf("%s %d %d", std1.name, &std1.english, &std1.korean);
	scanf("%s %d %d", std2.name, &std2.english, &std2.korean);

	res = output(std1, std2);

	printf("%s %d %d \n", std1.name, std1.english, std1.korean);
	printf("%s %d %d \n", std2.name, std2.english, std2.korean);
	printf("%s %d %d \n", res.name, res.english, res.korean);

	return 0;
}
