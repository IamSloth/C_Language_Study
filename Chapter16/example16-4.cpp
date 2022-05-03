/***************************************************

자기주도 C언어 프로그래밍
Page342, example 16-4

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
두 점의 좌표를 입력받아 두 점의 중심점의 좌표를 소수 첫째자리까지 출력하는 프로그램을 작성하시오.

입력 예)
점의 좌표는?(x, y) 10 5
점의 좌표는?(x, y) 12 36

출력 예)
중심점의 위치 = (11.0, 20.5)

*/

#include <stdio.h>
#include <string.h>

struct point
{
	float x, y;
} p1, p2, p3;

void p_input(struct point& a)
{
	printf("점의 좌표는?(x, y) ");
	scanf("%f %f", &a.x, &a.y);
}

struct point center(struct point a, struct point b)
{
	struct point c;
	c.x = (a.x + b.x) / 2;
	c.y = (a.y + b.y) / 2;

	return c;
}



int main()
{
	p_input(p1);
	p_input(p2);

	p3 = center(p1, p2);
	
	printf("중심점의 위치 = (%.1f, %.1f)\n", p3.x, p3.y);

	return 0;
}
