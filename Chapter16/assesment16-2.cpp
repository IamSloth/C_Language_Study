/***************************************************

자기주도 C언어 프로그래밍
Page353, assesment 16-1

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
위 1번과 같은 자료를 배열로 선언하여 3명의 자료를 입력받은 후
사전순으로 이름이 가장 빠른 사람의 자료를 출력하는 프로그램을 작성하시오.

입력 예)
Lim 1234-5678 Seoul
Hong 2345-6789 Gangwon
Sung 3456-7890 Gyeonggi

출력 예)

name : Hong
tel : 2345-6789
addr : Gangwon
*/

#include <stdio.h>
#include <string.h>


struct info
{
	char name[100];
	char phone[100];
	char city[100];
}person[3];


int main()
{
	for (int i = 0; i < 3; i++)
	{
		scanf("%s %s %s", person[i].name, person[i].phone, person[i].city);
	}
	
	struct info min = person[0];
	for (int i = 1; i < 3; i++)
	{
		if (min.name[0] > person[i].name[0])
		{
			min = person[i];
		}
	}

	printf("\nname : %s\n", min.name);
	printf("tel : %s\n", min.phone);
	printf("addr : %s\n", min.city);

	return 0;
}
