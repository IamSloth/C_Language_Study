/***************************************************

자기주도 C언어 프로그래밍
Page344, selftest 16-4

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
삼각형의 세 꼭지점의 좌표를 입력받아 삼각형의 무게중심의 좌표를
반올림하여 소수 첫째자리까지 출력하는 프로그램을 작성하시오.

입력 예)
0 0 1 2 10 15

출력 예)
(3.7, 5.7)
*/

#include <stdio.h>
#include <string.h>

struct point
{
	float x, y;
} p1, p2, p3, p4;

void inputPoint(struct point& p)
{
	scanf("%f %f", &p.x, &p.y);
}

struct point center(struct point a, struct point b, struct point c)
{
	struct point cal;

	cal.x = (a.x + b.x + c.x) / 3;
	cal.y = (a.y + b.y + c.y) / 3;

	return cal;
}


int main()
{
	inputPoint(p1);
	inputPoint(p2);
	inputPoint(p3);

	p4 = center(p1, p2, p3);
	
	printf("(%.1f, %.1f)\n", p4.x, p4.y);

	return 0;
}
