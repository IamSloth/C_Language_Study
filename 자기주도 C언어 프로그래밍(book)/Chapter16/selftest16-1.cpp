/***************************************************

자기주도 C언어 프로그래밍
Page334, example 16-1

This code is just for studying.
This code was written on April 18, 2022.
by IamSloth

****************************************************/


/** 문제 **
이름, 학교명, 학년을 입력받아 아래와 같이 출력하는 프로그램을 작성하시오
이름과 학교명은 각각 20자 이하이다.

입력 예) Songjunhyuk Beolmal 6

출력 예)
Name : Songjunhyuk
School : Beolmal
Grade : 6

*/

#include <stdio.h>

struct data
{
	char name[20];
	char schoolName[20];
	int grade;
};

int main()
{
	struct data student;

	scanf("%s %s %d", student.name, student.schoolName, &student.grade);
	printf("Name : %s\n", student.name);
	printf("School : %s\n", student.schoolName);
	printf("Grade : %d\n", student.grade);

	return 0;
}


