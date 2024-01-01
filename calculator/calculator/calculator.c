#include <stdio.h>

int main() {
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

			break;
	default:
		printf("錯誤：不支持的操作符\n");
		return 1;
		}


		printf("結果: %.2f\n", result);

		return 0;
	}
}
