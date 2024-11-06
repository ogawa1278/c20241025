#include <stdio.h>

int main(void)
{
	puts("点数を入力してください:");

	int score;
	scanf("%d", &score);

	if (90 <= score <= 100)
	{
		puts("A+");
	}
	else if (80 <= score < 90)
	{
		puts("A");
	}
	else if (70 <= score < 80)
	{
		puts("B");
	}
	else if (60 <= score < 70)
	{
		puts("C");
	}
	else
	{
		puts("F");
	}
}
