#include <stdio.h>

int main() {
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

			break;
	default:
		printf("���~�G��������ާ@��\n");
		return 1;
		}


		printf("���G: %.2f\n", result);

		return 0;
	}
}
