/***************************************************

자기주도 C언어 프로그래밍
Page342, selftest 16-3

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 명의 이름과 국어 영어 점수를 입력받아 과목별 점수의 평균을 구하여 출력하는 프로그램을 작성해 보시오.
이름은 20자 이하이고 평균의 소수점 이하는 버림한다.

입력 예)
Junho 88 100
Seonbin 95 96

출력 예)
Junho 88 100
Seonbin 95 96
avg 91 98

*/

#include <stdio.h>
#include <string.h>

struct student
{
	char name[20];
	int korean;
	int english;

}std1, std2, output;

struct student avg(struct student a, struct student b)
{
	struct student cal;
	strcpy(cal.name, "avg");
	cal.english = (a.english + b.english) / 2;
	cal.korean = (a.korean + b.korean) / 2;

	return cal;
}



int main()
{
	scanf("%s %d %d", std1.name, &std1.english, &std1.korean);
	scanf("%s %d %d", std2.name, &std2.english, &std2.korean);

	output = avg(std1, std2);
	
	printf("%s %d %d\n", std1.name, std1.english, std1.korean);
	printf("%s %d %d\n", std2.name, std2.english, std2.korean);
	printf("%s %d %d\n", output.name, output.english, output.korean);

	return 0;
}
