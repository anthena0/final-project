#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void turntable(char* options[], int numOptions);

int main() {
	int choice;

	// ���ܨϥΪ̿��
	printf("1 : �}�lŪ��\n2 : �i��\n3 : �p���\n�п�ܥ\��G");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("�z��ܤF�\�� 1�C\n");
		// �p��Ū�Ѯɶ�
		break;
	case 2:
		printf("�z��ܤF�\�� 2�C\n");
		// �n�Y����
		srand(time(NULL));
		char* options[5];
		int numOptions;
		int start;

		printf("�Y���ɶ����!\n");
		do
		{
			printf("�п�J�ﶵ���ƶq�]�̦h5�ӡ^: ");
			scanf("%d", &numOptions);
		} while (numOptions <= 0 || numOptions > 5);

		for (int i = 0; i < numOptions; i++) {
			options[i] = (char*)malloc(10 * sizeof(char));
			printf("�п�J��%d�ӿﶵ: ", i + 1);
			scanf("%s", options[i]);
		}

		do
		{
			printf("\n�п�J�u1�v�Ӷ}�l��L...\n��");
			scanf("%d", &start);
			if (start == 1) {
				turntable(options, numOptions);
			}
		} while (start != 1);

		for (int i = 0; i < numOptions; i++) {
			free(options[i]);
		}
		system("pause");
		return 0;
		break;
	case 3:
		printf("�z��ܤF�\�� 3�C\n");
		// �p���
		break;
	default:
		printf("�L�Ī���ܡC\n");
	}

	return 0;
}
void turntable(char* options[], int numOptions) {

	int randomselection = rand() % numOptions;

	for (int a = 0; a <= 10; a++)
	{
		printf(".\n");
	}
	printf("\n�襤���ﶵ�O�G%s\n\n", options[randomselection]);
}