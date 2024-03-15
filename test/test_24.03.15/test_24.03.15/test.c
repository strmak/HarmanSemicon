#include "test_header_24.03.15.h"

void main()
{
	int n;
	void* pF[] = { prob1, prob2, prob3, prob4, prob5, prob6, prob7 };
	void(*pFunc)();

	while (1)
	{
		printf("\n\n\n");
		printf("1. 문자열 띄어쓰기 + 소문자->대문자\n");
		printf("2. ASCII CODE\n");
		printf("3. Swap 함수\n");
		printf("4. * 피라미드\n");
		printf("5. 알파벳 계단\n");
		printf("6. 최대공약수 출력\n");
		printf("7. sin 곡선 그리기\n");
		printf("0. 종   료\n");
		printf("==================================\nChoose one!\n");
		scanf("%d", &n);
		pFunc = pF[n - 1];
		pFunc();
	}
}