/***************************************************

자기주도 C언어 프로그래밍
Page376, example 18-1

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
현재 프로젝트 폴더의 하위에 "temp" 폴더를 생성하고 "temp" 폴더의 "in.txt" 파일로부터
10개의 정수를 입력받아 짝수 번째 입력받은 정수를 "temp" 폴더의 "out.txt" 파일에 출력하는 프로그램을 작성하시오.

입력 예)
15 23 1 100 35 99 123 20 5 456

출력 예)
23 100 99 20 456
*/

#include <stdio.h>

int main()
{
	FILE* in;
	FILE* out;

	in = fopen(".//temp//in.txt", "r");
	out = fopen(".//temp//output.txt", "w");

	int num[11];

	for (int i = 1; i <= 10; i++)
	{
		fscanf(in, "%d", &num[i]);
	}
	
	for (int i = 2; i <= 10; i += 2)
	{
		fprintf(out, "%d ", num[i]);
		printf("%d ", num[i]);
	}

	fclose(in);
	fclose(out);

	return 0;
}


