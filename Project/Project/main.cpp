#include <stdio.h>
#include <stdlib.h>

int main() {
	int choice;

	// ���ܨϥΪ̿��
	printf("�п�ܥ\��\n1�G�}�lŪ��\n2 : �i��\n3 : �p���\n�G");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("�z��ܤF�\�� 1�C\n");
		// �p��Ū�Ѯɶ�
		break;
	case 2:
		printf("�z��ܤF�\�� 2�C\n");
		// �n�Y����
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