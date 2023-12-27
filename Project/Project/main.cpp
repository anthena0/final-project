#include <stdio.h>
#include <stdlib.h>

int main() {
	int choice;

	// 提示使用者選擇
	printf("請選擇功能\n1：開始讀書\n2 : 進食\n3 : 計算機\n：");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("您選擇了功能 1。\n");
		// 計算讀書時間
		break;
	case 2:
		printf("您選擇了功能 2。\n");
		// 要吃什麼
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