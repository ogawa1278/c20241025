#include <stdio.h>

int main(void)
{
    puts("点数を入力してください:");

    int score;
    scanf("%d", &score);

    if(score > 100){
        puts("wow");
    }
    else if (90 <= score){
        puts("A+");
    }
    else if (80 <= score){
        puts("A");
    }
    else if (70 <= score){
        puts("B");
    }
    else if (60 <= score){
        puts("C");
    }
    else if(0 <= score){
        puts("F");
    }
    else{
        puts("How?");
    }
}
