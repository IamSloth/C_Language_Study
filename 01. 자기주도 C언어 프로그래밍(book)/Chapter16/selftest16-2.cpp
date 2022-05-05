/***************************************************

자기주도 C언어 프로그래밍
Page338, selftest 16-2

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
학교명, 학년을 저장할 수 있는 구조체로 2개의 변수를 선언한 후,
한 개의 변수는 학교명에 Jejuelementary 학년에 6으로 각각 초기화하고
다른 변수에는 새로운 학교와 학년을 입력받아 아래와 같이 출력하는 프로그램을 작성하시오
학교명은 30자 이하이다

입력 예) Seogwipomiddle 1

출력 예)
6 grade in Jejuelementary School
1 grade in Seogwipomiddle School

*/

#include <stdio.h>

struct data
{
	char schoolName[30];
	int grade;
}num1;

struct data num2 = { "Jejuelementary",6 };

int main()
{
	scanf("%s %d", num1.schoolName, &num1.grade);
	printf("%d grade in %s School\n", num2.grade, num2.schoolName);
	printf("%d grade in %s School", num1.grade, num1.schoolName);

	return 0;
}


