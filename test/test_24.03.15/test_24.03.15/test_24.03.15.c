//#include "test_header_24.03.15.h"
//
//void main()
//{
//	int n;
//	void* pF[] = { prob1, prob2, prob3, prob4, prob5, prob6, prob7 };
//	void(*pFunc)();
//
//	while (1)
//	{
//		printf("\n\n\n");
//		printf("1. ���ڿ� ���� + �ҹ���->�빮��\n");
//		printf("2. ASCII CODE\n");
//		printf("3. Swap �Լ�\n");
//		printf("4. * �Ƕ�̵�\n");
//		printf("5. ���ĺ� ���\n");
//		printf("6. �ִ����� ���\n");
//		printf("7. sin � �׸���\n");
//		printf("0. ��   ��\n");
//		printf("==================================\nChoose one!\n");
//		scanf("%d", &n);
//		pFunc = pF[n - 1];
//		pFunc();
//	}
//}

#include "MyHeader.h"

int main()
{
    char* fruit[5] = { "grape", "apple", "banana", "lemon", "orange" };   // ���ĵ��� ���� �迭

    sort_str(fruit, 5);    // ��ǰ ���� �Լ� ȣ��

    for (int i = 0; i < 5; i++)
    {
        printf("%s ", fruit[i]);    // apple, banana, grape, orange, lemon
    }

    printf("\n");

    return 0;
}