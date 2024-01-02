#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

void turntable(char* options[], int numOptions);

void startStopwatch() {
	time_t startTime, endTime;
	int elapsed;
	int min = 0, second = 0;
	printf("\n���UENTER��H�}�l�p��...");
	getch();
	startTime = time(NULL);
	printf("�}�l�p��!\n");
	printf("�A���@��ENTER��H�����p��...\n");
	getch();
	endTime = time(NULL);
	elapsed = difftime(endTime, startTime);
	while (elapsed >= 60) {
		elapsed = elapsed - 60;
		min++;
	}
	printf("�����p��!\n");
	printf("�@%d��%d��\n\n", min, elapsed);
}

void startCountdown() {
	int countdown;
	printf("��J�˼Ʈɶ�(���): ");
	scanf("%d", &countdown);
	printf("�}�l�˼�%d��\n", countdown);
	while (countdown > 0) {
		printf("%d\n", countdown);
		Sleep(1000);
		countdown--;
	}
	printf("�ɶ���!\n\n");
}



int main() {
	int choice;
	do
	{
		// ���ܨϥΪ̿��
		printf("_______________________________________________________________________\n");
		printf("1 : �}�lŪ��\n2 : �i��\n3 : �p���\n4 : ����\n�п�ܥ\��G");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("�z��ܤF�\�� 1�C\n\n");
			// �p��Ū�Ѯɶ�

			int choice = 0;
			printf("��ܭp�ɥ\��(1:���p��; 2:�˭p��):");
			fflush(stdin);
			scanf("%d", &choice);

			if (choice == 1) {
				startStopwatch();
			}
			else {
				startCountdown();
			}
			break;
		case 2:
			printf("�z��ܤF�\�� 2�C\n\n");
			// �n�Y����
			srand(time(NULL));
			char* options[5];
			int numOptions;
			int start;

			printf("�Y���ɶ����!�n�Y����O?\n");
			do
			{
				printf("�п�J�ﶵ���ƶq�]1~5�^: ");
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
			break;
		case 3:
			printf("�z��ܤF�\�� 3�C\n\n");
			// �p���

			char operator;
			double num1, num2, result;


			printf("�п�J�ާ@�� (+, -, *, /): ");
			scanf(" %c", &operator);


			getchar();


			printf("�п�J��ӼƦr: ");
			scanf("%lf %lf", &num1, &num2);


			switch (operator) {
			case '+':
				result = num1 + num2;
				break;
			case '-':
				result = num1 - num2;
				break;
			case '*':
				result = num1 * num2;
				break;
			case '/':

				if (num2 != 0) {
					result = num1 / num2;
				}
				else {
					printf("���~�G���Ƥ��ର�s\n");
					return 1;
				}
				break;
			default:
				printf("���~�G��������ާ@��\n");
				return 1;
			}
			printf("���G: %.2f\n\n", result);
			break;
		case 4:
			return 0;
			break;
		default:
			printf("�L�Ī���ܡC\n\n");
		}

	} while (choice!=4);

}
void turntable(char* options[], int numOptions) {

	int randomselection = rand() % numOptions;

	for (int a = 0; a <= 10; a++)
	{
		printf(".\n");
	}
	printf("\n�襤���ﶵ�O�G%s\n\n", options[randomselection]);
}