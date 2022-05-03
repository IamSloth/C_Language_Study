/***************************************************

자기주도 C언어 프로그래밍
Page376, example 18-1

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
"input.txt" 파일로부터 이름과 국어, 영어점수를 입력받아
이름과 합계 평균을 화면과 "output.txt" 파일에 출력하는 프로그램을 작성하시오.

입력 예)
김범수 90 95

출력 예)
김범수 185 92.5
*/

#include <stdio.h>

int main()
{
	int sum, kor, eng;
	double avg;
	char name[100];

	FILE* in, * out;
	in = fopen("input.txt", "r");
	out = fopen("output.txt", "w");

	fscanf(in, "%s %d %d", name, &kor, &eng);

	sum = kor + eng;
	avg = (kor + eng) / 2.0;

	printf("%s %d %.1f \n", name, sum, avg);
	fprintf(out, "%s %d %.1f \n", name, sum, avg);

	fclose(in);
	fclose(out);


	return 0;
}


