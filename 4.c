#include <stdio.h>

int main(void)
{
	puts("年月日を入力してください:");

	int year, month, day;
	scanf("%d\n%d\n%d\n", &year, &month, &day);

	if ((year < 1912) && (month < 7) && (day < 30))
	{
		puts("大正以前");
	}
	else if ((year < 1926) && (month < 12) && (day < 25))
	{
		puts("大正");
	}
	else if ((year < 1989) && (month < 1) && (day < 8))
	{
		puts("昭和");
	}
	else if ((year < 2019) && (month < 4) && (day < 30))
	{
		puts("平成");
	}
	else
	{
		puts("令和");
	}
}
