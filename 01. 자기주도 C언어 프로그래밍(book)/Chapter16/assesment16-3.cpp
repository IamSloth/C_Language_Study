/***************************************************

자기주도 C언어 프로그래밍
Page353, assesment 16-3

This code is just for studying.
This code was written on April 19, 2022.
by IamSloth

****************************************************/


/** 문제 **
직사각형의 왼쪽 아래의 좌표(x1, y1) 와 오른쪽 위의 좌표 (x2, y2) 를 저장할 수 있는 구조체 자료형을 만들고
두 개의 직사각형 자료를 입력받아 두 직사각형을 포함하는 최소의 직사각형 자료를
구하여 구조체 변수에 저장하고 출력하는 프로그램을 작성하시오
단 모든 입력값은 100을 넘지 않는다

입력 예)
1 1 6 5
2 0 7 3

출력 예)

1 0 7 5
*/

#include <stdio.h>
#include <string.h>


struct Point
{
	int x, y;

} leftDown, rightUp;

struct Rectangle
{
	struct Point ld, ru;

}rec1, rec2, rec3;


int main()
{
	scanf("%d %d", &rec1.ld.x, &rec1.ld.y);
	scanf("%d %d", &rec1.ru.x, &rec1.ru.y);

	scanf("%d %d", &rec2.ld.x, &rec2.ld.y);
	scanf("%d %d", &rec2.ru.x, &rec2.ru.y);


	if (rec1.ld.x < rec2.ld.x)
		rec3.ld.x = rec1.ld.x;
	else
		rec3.ld.x = rec2.ld.x;


	if (rec1.ld.y < rec2.ld.y)
		rec3.ld.y = rec1.ld.y;
	else
		rec3.ld.y = rec2.ld.y;


	if (rec1.ru.x < rec2.ru.x)
		rec3.ru.x = rec2.ru.x;
	else
		rec3.ru.x = rec1.ru.x;


	if (rec1.ru.y < rec2.ru.y)
		rec3.ru.y = rec2.ru.y;
	else
		rec3.ru.y = rec1.ru.y;

	printf("%d %d %d %d\n", rec3.ld.x, rec3.ld.y, rec3.ru.x, rec3.ru.y);

}
