#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
	printf("���Ǳ� ���α׷�\n");
	printf("\n-----------------\n");

	int menu;
	int input;
	int price;
	int res;

	printf("1. ����ũ���ż�Ʈ(7400��)\n");
	printf("2. ���������ż�Ʈ(7800��)\n");
	printf("3. �ӽ�����ż�Ʈ(11400��)\n");
	printf("4. JG���ż�Ʈ(12400��)\n");
	printf("����>> ");

	scanf("%d", &menu);

	switch (menu) {
	case 1:
		printf("����ũ���ż�Ʈ�� �����ϼ̽��ϴ�.");
		price = 7400;
		break;
	case 2:
		printf("���������ż�Ʈ�� �����ϼ̽��ϴ�.");
		price = 7800;
		break;
	case 3:
		printf("������ġ����ż�Ʈ�� �����ϼ̽��ϴ�.");
		price = 9800;
		break;
	case 4:
		printf("�ӽ�����ż�Ʈ�� �����ϼ̽��ϴ�.");
		price = 11400;
		break;
	case 5:
		printf("JG���ż�Ʈ�� �����ϼ̽��ϴ�.");
		price = 12400;
		break;
	default:
		printf("�߸� �����ϼ̽��ϴ�.");
		return 1;
	}
	printf("\n");
	printf("�ݾ��� �����ϼ���: ");
	scanf("%d", &input);
	printf("%d���� �����ϼ̽��ϴ�.\n", input);
	res = input - price;
	printf("�ܵ��� %d�� �Դϴ�.", res);

	return 0;
}