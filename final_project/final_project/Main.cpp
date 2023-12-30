#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void turntable(char* options[], int numOptions);

int main() {
	int choice;

	// 提示使用者選擇
	printf("1 : 開始讀書\n2 : 進食\n3 : 計算機\n請選擇功能：");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("您選擇了功能 1。\n");
		// 計算讀書時間
		break;
	case 2:
		printf("您選擇了功能 2。\n");
		// 要吃什麼
		srand(time(NULL));
		char* options[5];
		int numOptions;
		int start;

		printf("吃飯時間到啦!\n");
		do
		{
			printf("請輸入選項的數量（最多5個）: ");
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
		system("pause");
		return 0;
		break;
	case 3:
		printf("您選擇了功能 3。\n");
		// 計算機
		break;
	default:
		printf("無效的選擇。\n");
	}

	return 0;
}
void turntable(char* options[], int numOptions) {

	int randomselection = rand() % numOptions;

	for (int a = 0; a <= 10; a++)
	{
		printf(".\n");
	}
	printf("\n選中的選項是：%s\n\n", options[randomselection]);
}