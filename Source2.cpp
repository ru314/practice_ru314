#include <stdio.h>

int main() {
	int N,ans=300000;
	char S[300000];

	scanf("%d", &N);
	scanf("%s", S);

	for (int i = 0;i < N;i++) {//���[�_�[�ԍ����w��
		int count = 0;
		for (int j = 0;j < N;j++) {//������S�T��
			if (i != j) {//���[�_�[�̌����̓J�E���g���Ȃ�
				if (S[j] == 'W'&&j<i|| S[j] == 'E'&&i<j) {//����Wor�E��E
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
E��W�ɂȂ�悤�ɕύX����ŒZ�萔�����߂�
�e�ԍ������[�_�[�ɂ������A���̍�����W�̐��ƉE����E�̐��̘a���ł���������΂悢
*/