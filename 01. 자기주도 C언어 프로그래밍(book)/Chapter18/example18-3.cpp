/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page381, selftest 18-2

This code is just for studying.
This code was written on April 25, 2022.
by IamSloth

****************************************************/


/** ���� **
100�� ������ �����ڷᰡ ����Ǿ� �ִ� ���Ϸκ��� ��� �л��� �̸��� ������ �Է¹޾�
1����� ���ʴ�� ������Ͽ� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��)
ȫ�浿 90
�Ӳ��� 85
����ȣ 88
������ 75
��âȣ 100
����ȯ 90
��̶� 75
�̽¿� 90
�迬�� 95
������ 60

��� ��)
�̸�	����	���
��âȣ	100		1
�迬��	95		2
����ȯ	90		3
�̽¿�	90		3
ȫ�浿	90		3
����ȣ	88		6
�Ӳ���	85		7
������	75		8
��̶�	75		8
������	60		10
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

	fprintf(out,"�̸�\t����\t���\t\n");
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


