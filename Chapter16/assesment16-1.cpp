/***************************************************

자기주도 C언어 프로그래밍
Page353, assesment 16-1

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
이름과 전화번호 주소를 멤버로 하는 구조체를 정의하여 1개의 자료를 입력받고
아래 출력 예와 같은 형식으로 출력하는 프로그램을 작성하시오
각각의 길이는 100자 이하이다

입력 예)
Lim 1234-5678 Seoul

출력 예)

name : Lim
tel : 1234-5678
addr : Seoul
*/

#include <stdio.h>
#include <string.h>


struct info
{
	char name[100];
	char phone[100];
	char city[100];
}person1;


int main()
{
	scanf("%s %s %s", person1.name, person1.phone, person1.city);
	printf("name : %s\n", person1.name);
	printf("tel : %s\n", person1.phone);
	printf("addr : %s\n", person1.city);

	return 0;
}
