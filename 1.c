#include <stdio.h>

int main(void){
	puts("アメリカの首都は？");
	puts("1: ワシントン D.C.");
	puts("2: パリ");
	puts("3: ニューヨーク");
	puts("4: ロンドン");

	int answer;
	scanf("%d", &answer);

	if(answer == 1){
		puts("正解！");
	}
    else{
		puts("不正解！");
	}
}
