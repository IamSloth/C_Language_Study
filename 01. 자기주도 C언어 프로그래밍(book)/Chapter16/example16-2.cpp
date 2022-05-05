/***************************************************

자기주도 C언어 프로그래밍
Page337, example 16-2

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
자신의 이름과 나이를 초기화하고
친구의 이름과 나이를 입력받아 모두 출력하는 프로그램을 작성하시오.

입력 예) 친한 친구의 이름과 나이를 입력하세요. 송승효 13

출력 예)
당신의 이름 손예준, 나이: 12
친구의 이름 송승효, 나이: 13

*/

#include <stdio.h>

struct infomation
{
	char name[30];
	int age;
} friend1;

struct infomation me = { "손예준",12 };


int main()
{
	printf("친한 친구의 이름과 나이를 입력하세요. ");
	scanf("%s %d", friend1.name,&friend1.age);
	printf("당신의 이름 %s, 나이 : %d\n", me.name, me.age);
	printf("친구의 이름 %s, 나이 : %d\n", friend1.name, friend1.age);
	return 0;
}
