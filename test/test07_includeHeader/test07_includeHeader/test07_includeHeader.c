#include "test07_header.h"

void main()
{
	int n;
	void* pF[] = { test01, test02, test03, test04, test05, test06, test07, test08 };
	void(*pFunc)();

	while (1)
	{
		printf("\n\n\n");
		printf("1. ����Ű�� ���� ���ڿ� ���\n");
		printf("2. ���ڿ��� ���ڹ迭\n");
		printf("3. �������� ��ġ ����\n");
		printf("4. �����͸� �̿��� ���ڿ� ����� �Լ�\n");
		printf("5. ����ü �ؽ�Ʈ\n");
		printf("6. ���ڿ� �Լ�\n");
		printf("7. ���ڿ� ���� �Լ�\n");
		printf("8. ���ڿ� �� �Լ�\n");
		printf("0. ��   ��\n");
		printf("==================================\nChoose one!\n");
		scanf("%d", &n);
		pFunc = pF[n - 1];
		pFunc();
	}
}