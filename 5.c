#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// min 以上、max 以下の乱数を生成する関数
int RandomInt(int min, int max)
{
	static int initialized = 0;

	if (initialized == 0)
	{
		srand(time(NULL));
		initialized = 1;
	}

	return min + (int)(rand() * (max - min + 1.0) / (RAND_MAX + 1.0));
}

int main(void)
{
	for (;;)
	{
		// 主人公の HP
		int playerHP = 200;

		// 敵の HP
		int enemyHP = 200;

		puts("----------------------------");
		printf("主人公\t HP: %d\n", playerHP);
		printf("敵\t HP: %d\n", enemyHP);
		puts("----------------------------");

		puts("行動を選択してください");
		puts("1: 攻撃 2: 回復 3: 逃げる");

		int action;
		scanf("%d", &action);

		puts("----------------------------");

		if (action == 1) // 攻撃
		{
			puts("主人公の攻撃！");

			// 敵に与えるダメージを 20 ～ 40 の範囲でランダムに決定
			int damage = RandomInt(20, 40);
			printf("敵に%dのダメージ！\n", damage);

			enemyHP -= damage;
		}
		else if (action == 2) // 回復
		{
			puts("主人公は 100 回復した！");
			playerHP += 100;
		}
		else if (action == 3) // 逃げる
		{
			puts("うまく逃げ切れた！");
			break;
		}

		{
			puts("敵の攻撃！");

			// 主人公に与えるダメージを 30 ～ 50 の範囲でランダムに決定
			int damage = RandomInt(30, 50);
			printf("主人公に%dのダメージ！\n", damage);

			playerHP -= damage;
		}

		if (playerHP <= 0)
		{
			puts("主人公は力尽きた...【敗北】");
			break;
		}
		else if (enemyHP <= 0)
		{
			puts("敵を倒した！【勝利】");
			break;
		}
	}
}
