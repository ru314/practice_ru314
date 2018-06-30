#include <stdio.h>

int main() {
	int N,ans=300000;
	char S[300000];

	scanf("%d", &N);
	scanf("%s", S);

	for (int i = 0;i < N;i++) {//リーダー番号を指定
		int count = 0;
		for (int j = 0;j < N;j++) {//左から全探索
			if (i != j) {//リーダーの向きはカウントしない
				if (S[j] == 'W'&&j<i|| S[j] == 'E'&&i<j) {//左にWor右にE
					count++;
				}
			}
		}
		if (count < ans)ans = count;
	}

	printf("%d\n", ans);

	return 0;
}


/*
E→Wになるように変更する最短手数を求める
各番号をリーダーにした時、その左側のWの数と右側のEの数の和が最も小さければよい
*/