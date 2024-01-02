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
	printf("共%d分%d秒\n\n", min, elapsed);
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
	printf("時間到!\n\n");
}



int main() {
	int choice;
	do
	{
		// 提示使用者選擇
		printf("_______________________________________________________________________\n");
		printf("1 : 開始讀書\n2 : 進食\n3 : 計算機\n4 : 結束\n請選擇功能：");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("您選擇了功能 1。\n\n");
			// 計算讀書時間

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
			break;
		case 2:
			printf("您選擇了功能 2。\n\n");
			// 要吃什麼
			srand(time(NULL));
			char* options[5];
			int numOptions;
			int start;

			printf("吃飯時間到啦!要吃什麼呢?\n");
			do
			{
				printf("請輸入選項的數量（1~5）: ");
				scanf("%d", &numOptions);
			} while (numOptions <= 0 || numOptions > 5);

			for (int i = 0; i < numOptions; i++) {
				options[i] = (char*)malloc(10 * sizeof(char));
				printf("請輸入第%d個選項: ", i + 1);
				scanf("%s", options[i]);
			}

			do
			{
				printf("\n請輸入「1」來開始轉盤...\n→");
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
			printf("您選擇了功能 3。\n\n");
			// 計算機

			char operator;
			double num1, num2, result;


			printf("請輸入操作符 (+, -, *, /): ");
			scanf(" %c", &operator);


			getchar();


			printf("請輸入兩個數字: ");
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
					printf("錯誤：除數不能為零\n");
					return 1;
				}
				break;
			default:
				printf("錯誤：不支持的操作符\n");
				return 1;
			}
			printf("結果: %.2f\n\n", result);
			break;
		case 4:
			return 0;
			break;
		default:
			printf("無效的選擇。\n\n");
		}

	} while (choice!=4);

}
void turntable(char* options[], int numOptions) {

	int randomselection = rand() % numOptions;

	for (int a = 0; a <= 10; a++)
	{
		printf(".\n");
	}
	printf("\n選中的選項是：%s\n\n", options[randomselection]);
}