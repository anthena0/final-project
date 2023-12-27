#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

void startStopwatch() {
	time_t startTime, endTime;
	int elapsed;
	int min = 0, second = 0;
	printf("\n按下ENTER鍵以開始計時...");
	getch(); 
	startTime = time(NULL);
	printf("開始計時!\n");
	printf("再按一次ENTER鍵以結束計時...\n");
	getch(); 
	endTime = time(NULL);
	elapsed = difftime(endTime, startTime);
	while (elapsed >= 60) {
		elapsed = elapsed - 60;
		min++;
	}
	printf("結束計時!\n");
	printf("共%d分%d秒\n", min, elapsed);
}

void startCountdown() {
	int countdown;
	printf("輸入倒數時間(秒數): ");
	scanf("%d", &countdown);
	printf("開始倒數%d秒\n", countdown);
	while (countdown > 0) {
		printf("%d\n", countdown);
		Sleep(1000); 
		countdown--;
	}
	printf("時間到!\n");
}

int main() {
	int choice = 0;
	printf("選擇計時功能(1:正計時; 2:倒計時):");
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