/***************************************************

자기주도 C언어 프로그래밍
Page345, example 16-5

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
5명의 이름과 키를 입력받아 키가 가장 작은 사람의 이름과 키를 출력하는 프로그램을 작성하시오.
이름은 20자 이하이다

입력 예)
Park 175
Lee 180
Choo 185
Son 193
Kim 188

출력 예)
Park 175
*/

#include <stdio.h>
#include <string.h>


struct person
{
	char name[20];
	int height;
};

struct person min(struct person a[], int n)
{
	struct person m;

	m = a[0];

	for (int i = 1; i < n; i++)
	{
		if (m.height > a[i].height)
			m = a[i];
	}

	return m;
}



int main()
{
	struct person num[5], mmin;

	for (int i = 0; i < 5; i++)
	{
		scanf("%s %d", num[i].name, &num[i].height);
	}

	mmin = min(num, 5);

	printf("%s %d", mmin.name, mmin.height);

	return 0;
}
