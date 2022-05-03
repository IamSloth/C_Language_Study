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

};

void inputRec(struct Rectangle& r)
{
	printf("사각형의 왼쪽 아래 꼭지점을 입력하세요. (입력형식 : 1 1) ");
	scanf("%d %d", &r.ld.x, &r.ld.y);
	printf("사각형의 오른쪽 위 꼭지점을 입력하세요. (입력형식 : 1 1) ");
	scanf("%d %d", &r.ru.x, &r.ru.y);
}

struct Rectangle minRec(struct Rectangle r1, struct Rectangle r2)
{
	struct Rectangle result;

	if (r1.ld.x < r2.ld.x)
		result.ld.x = r1.ld.x;
	else
		result.ld.x = r2.ld.x;

	if (r1.ld.y < r2.ld.y)
		result.ld.y = r1.ld.y;
	else
		result.ld.y = r2.ld.y;

	if (r1.ru.x < r2.ru.x)
		result.ru.x = r2.ru.x;
	else
		result.ru.x = r1.ru.x;


	if (r1.ru.y < r2.ru.y)
		result.ru.y = r2.ru.y;
	else
		result.ru.y = r1.ru.y;

	return result;
}

void outputRec(struct Rectangle r)
{
	printf("%d %d %d %d\n", r.ld.x, r.ld.y, r.ru.x, r.ru.y);
}


int main()
{
	struct Rectangle rec1, rec2, rec3;
	printf("첫번째 ");
	inputRec(rec1);
	printf("두번째 ");
	inputRec(rec2);
	rec3 = minRec(rec1, rec2);
	outputRec(rec3);

}
