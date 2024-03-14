#include "test07_header.h"

void main()
{
	int n;
	void* pF[] = { test01, test02, test03, test04, test05, test06, test07, test08 };
	void(*pFunc)();

	while (1)
	{
		printf("\n\n\n");
		printf("1. 숫자키에 대한 문자열 출력\n");
		printf("2. 문자열과 문자배열\n");
		printf("3. 포인터의 위치 지정\n");
		printf("4. 포인터를 이용한 문자열 입출력 함수\n");
		printf("5. 구조체 텍스트\n");
		printf("6. 문자열 함수\n");
		printf("7. 문자열 길이 함수\n");
		printf("8. 문자열 비교 함수\n");
		printf("0. 종   료\n");
		printf("==================================\nChoose one!\n");
		scanf("%d", &n);
		pFunc = pF[n - 1];
		pFunc();
	}
}