#include <stdio.h>
#include <string.h>

struct Data
{
	char name[20];
	int score;
	int rank;
	int num;
}stu[10];

int main()
{
	FILE* in = fopen("./temp/in.txt", "r");
	FILE* out = fopen(".//temp//out.txt", "w");

	for (int i = 0; i < 10; i++)
	{
		fscanf(in, "%s %d", stu[i].name, &stu[i].score);
		stu[i].num = i;
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (stu[i].score < stu[j].score)
			{
				struct Data temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		stu[i].rank = i + 1;
	}

	for (int i = 0; i < 9; i++)
	{
		if (stu[i].score == stu[i+1].score)
			stu[i + 1].rank = stu[i].rank;
	}
	

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (stu[i].num > stu[j].num)
			{
				struct Data temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}

	printf("Name \t Score \t Rank \n");
	for (int i = 0; i < 10; i++)
	{
		fprintf(out, "%4s \t %4d \t %4d\n", stu[i].name, stu[i].score, stu[i].rank);
		printf("%4s \t %4d \t %4d\n", stu[i].name, stu[i].score, stu[i].rank);
	}
	

	fclose(in);
	fclose(out);

	return 0;
}


