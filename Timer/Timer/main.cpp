#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

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
	printf("�@%d��%d��\n", min, elapsed);
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
	printf("�ɶ���!\n");
}

int main() {
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
	return 0;
}