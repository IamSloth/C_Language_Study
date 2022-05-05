/***************************************************

자기주도 C언어 프로그래밍
Page73, Assesment 3-3

This code is just for studying.
This code was written on March 14, 2022.
by IamSloth

****************************************************/

/** 문제 **
직사각형의 가로와 세로의 길이를 입력받은 후 가로의 길이는 5 증가시키고, 세로의 길이는 2배 하여
저장한 후 가로의 길이, 세로의 길이, 넓이를 차례로 출력하는 프로그램을 작성하시오.

입력 예) 20 15
출력 예) width = 25
		 length = 30
		 area = 750
*/

#include <stdio.h>

int main()
{
	int width = 0, length = 0, area = 0;

	printf("\n");

	scanf("%d %d", &width, &length);

	width = width + 5;
	length = length * 2;
	area = width * length;

	printf("\n");

	printf("width = %d\n", width);
	printf("length = %d\n", length);
	printf("area = %d\n", area);
	

	printf("\n");



	return 0;
}