/***************************************************

자기주도 C언어 프로그래밍
Page385, selftest 18-3

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** 문제 **
10명의 학생 이름과 점수를 입력받아 이름과 점수 등수를 입력받은 순서대로 출력하는 프로그램을 작성하시오
단 출력시 "Name", "Score", "Rank" 은 한 칸의 공백으로 구분.
표준 입출력으로 작성해야 채점이 됩니다*

입력 예)
Hong 90
Lim 85
Park 88
Gong 75
Lee 100
Seo 90
Jang 75
Song 90
Kim 95
Sung 60

출력 예)

Name	Score	 Rank
Hong	90			3
Lim		85			7
Park	88			6
Gong	75			8
Lee		100			1
Seo		90			3
Jang	75			8
Song	90			3
Kim		95			2
Sung	60			10
*/

#include <stdio.h>
#include <string.h>

struct Data
{
	char name[20];
	int score;
	int rank;

}student[10];

void input()
{
	FILE* in = fopen(".\\temp\\in.txt", "r");
	for (int i = 0; i < 10; i++)
	{
		fscanf(in, "%s %d", student[i].name, &student[i].score);
	}
	fclose(in);
}

void sort()
{
	struct Data temp[10];
	for (int i = 0; i < 10; i++)
	{
		temp[i] = student[i];
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (temp[i].score < temp[j].score)
			{
				struct Data tTemp = temp[i];
				temp[i] = temp[j];
				temp[j] = tTemp;
			}

		}
	}


	for (int i = 0; i < 10; i++)
	{
		temp[i].rank = i + 1;
	}

	for (int i = 0; i < 9; i++)
	{
		if (temp[i].score == temp[i + 1].score)
		{
			temp[i + 1].rank = temp[i].rank;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (strcmp(student[i].name, temp[j].name) == 0)
			{
				student[i].rank = temp[j].rank;
			}
		}
	}

}

void output()
{
	FILE* out = fopen(".\\temp\\out.txt", "w");
	fprintf(out, "Name\tScore\tRank\n");
	for (int i = 0; i < 10; i++)
	{
		fprintf(out, "%4s\t%d\t\t%d\n", student[i].name, student[i].score, student[i].rank);
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


