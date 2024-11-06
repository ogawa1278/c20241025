#include <stdio.h>

int main(void)
{
    puts("時間を秒で入力してください:");

    int time;
    scanf("%d", &time);

    int hour = (time / 3600);
    int minute = ((time-hour*3600) / 60); 
    int second = (time % 60);

    printf("%d時間%d分%d秒", hour,minute,second);
}
