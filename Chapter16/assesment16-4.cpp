/***************************************************

자기주도 C언어 프로그래밍
Page354, assesment 16-4

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
어떤 학생의 키는 아버지와 어머니의 키의 평균보다 5cm크고
몸무게는 아버지와 어머니의 몸무게의 평균보다 4.5kg가볍다고 한다.
키와 몸무게를 멤버변수로 갖는 구조체를 정의하고
아버지와 어머니의 키와 몸무게를 입력받아 학생의 키와 몸무게를 출력하는 프로그램을 작성하시오.
키는 정수미만 버림하고 몸무게는 반올림하여 소수 첫째자리까지 나타낸다.

입력 예)
175 68.8
166 56.4


출력 예)
height : 175cm
weight : 58.1kg

*/

#include <stdio.h>
#include <string.h>


struct Pinfo
{
	int height;
	float weight;

} mom, dad, son;

struct Pinfo cal(struct Pinfo a, struct Pinfo b)
{
	struct Pinfo result;
	result.height = (a.height + b.height) / 2 + 5;
	result.weight = (a.weight + b.weight) / 2 - 4.5;

	return result;
}

int main()
{
	scanf("%d %f", &mom.height, &mom.weight);
	scanf("%d %f", &dad.height, &dad.weight);

	son = cal(mom, dad);

	printf("\nheight : %dcm\n", son.height);
	printf("weight : %.1fkg\n", son.weight);

	return 0;
}
