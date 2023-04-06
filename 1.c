#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
	printf("자판기 프로그램\n");
	printf("\n-----------------\n");

	int menu;
	int input;
	int price;
	int res;

	printf("1. 프랭크버거세트(7400원)\n");
	printf("2. 쉬림프버거세트(7800원)\n");
	printf("3. 머쉬룸버거세트(11400원)\n");
	printf("4. JG버거세트(12400원)\n");
	printf("선택>> ");

	scanf("%d", &menu);

	switch (menu) {
	case 1:
		printf("프랭크버거세트를 선택하셨습니다.");
		price = 7400;
		break;
	case 2:
		printf("쉬림프버거세트를 선택하셨습니다.");
		price = 7800;
		break;
	case 3:
		printf("베이컨치즈버거세트를 선택하셨습니다.");
		price = 9800;
		break;
	case 4:
		printf("머쉬룸버거세트를 선택하셨습니다.");
		price = 11400;
		break;
	case 5:
		printf("JG버거세트를 선택하셨습니다.");
		price = 12400;
		break;
	default:
		printf("잘못 선택하셨습니다.");
		return 1;
	}
	printf("\n");
	printf("금액을 투입하세요: ");
	scanf("%d", &input);
	printf("%d원을 투입하셨습니다.\n", input);
	res = input - price;
	printf("잔돈은 %d원 입니다.", res);

	return 0;
}