/***************************************************

자기주도 C언어 프로그래밍
Page381, selftest 18-2

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
100명 이하의 성적자료가 저장되어 있는 파일로부터 모든 학생의 이름과 점수를 입력받아
1등부터 차례대로 출력파일에 저장하는 프로그램을 작성하시오.

입력 예)
홍길동 90
임꺽정 85
박찬호 88
박지성 75
이창호 100
박태환 90
장미란 75
이승엽 90
김연아 95
성춘향 60

출력 예)
이름	점수	등수
이창호	100		1
김연아	95		2
박태환	90		3
이승엽	90		3
홍길동	90		3
박찬호	88		6
임꺽정	85		7
박지성	75		8
장미란	75		8
성춘향	60		10
*/

#include <stdio.h>

struct Data
{
	char name[20];
	int score;
	int num;
}student[100];

void input()
{
	FILE* in;
	in = fopen(".//temp//in.txt", "r");
	for (int i = 0; i < 100; i++)
	{
		fscanf(in, "%s %d", student[i].name, &student[i].score);
	}
	fclose(in);

}

void sort()
{
	for (int i = 0; i < 99; i++)
	{
		for (int j = i + 1; j < 100; j++)
		{
			if (student[i].score < student[j].score)
			{
				struct Data temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}
		}
	}

	for (int i = 0; i < 100; i++)
	{
		student[i].num = i + 1;
	}

	for (int i = 0; i < 99; i++)
	{
		if (student[i].score == student[i + 1].score)
			student[i+1].num = student[i].num;
	}
}

void output()
{
	FILE* out;
	out = fopen(".//temp//out.txt", "w");

	fprintf(out,"이름\t점수\t등수\t\n");
	int i = 0;
	while (1)
	{
		fprintf(out, "%s\t%d\t%d\n", student[i].name, student[i].score, student[i].num);
		i++;
		if (student[i].score == 0)
			break;
	}
	
	fclose(out);
}

int main()
{
	input();
	sort();
	output();
	
	return 0;
}


