/***************************************************

자기주도 C언어 프로그래밍
Page345, example 16-5

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
5명의 저축액을 입력받아 저축왕의 번호와 저축액을 출력하는 프로그램을 작성하시오.

입력 예)
1번 저축금액은? 1000
2번 저축금액은? 12000
3번 저축금액은? 33200
4번 저축금액은? 5200
5번 저축금액은? 17300

출력 예)
저축왕 3번 33200원
*/

#include <stdio.h>
#include <string.h>

struct money
{
	int num;
	int cash;
};

struct money max(struct money arr[], int n)
{
	struct money maxdata = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i].cash > maxdata.cash)
			maxdata = arr[i];
	}

	return maxdata;
}


int main()
{
	struct money saving[5], king;
	for (int i = 0; i < 5; i++)
	{
		printf("%d번 저축금액은? ", i + 1);
		saving[i].num = i + 1;
		scanf("%d", &saving[i].cash);
	}

	king = max(saving, 5);
	printf("저축왕 %d번 %d원 \n", king.num, king.cash);

	return 0;
}
