#include <stdio.h>

//void test();
void test03();
void Dump(char* p, int len);
void Copy(char* p1, char* p2);

void main() {
	test03();
}

//void test() 
//{
//	char ca[] = "Hello"; // ca[0]:'H' ... ca[4]=:'o' ca[5]:\0
//	for (int i = 0; i < 6; i++) {
//		printf("ca[%d]: %c  (%02x)  [%08x]\n", i,  ca[i], ca[i], ca+i);
//	}
//
//	int ia[] = { 10,20,30,40,50 };
//	for (int i = 0; i < 6; i++) {
//		printf("ia[%d]: %d  (%08x)  [%08x]\n", i, ia[i], ia[i], ia + i);
//	}
//
//	int ia2[3][2] = { 10,20,30,40,50,60 };
//	for (int y = 0; y < 3; y++) {
//		for (int x = 0; x < 2; x++) {
//			printf("ia2[%d][%d]: %d  (%08x)\n", y, x, ia2[y][x], ia2[y][x]);
//		}
//	}
//}

void test03() {
	char buf[100];		// 안전 메모리 공간
	char* pbuf;			// 안전 메모리 공간중의 출력 위치
	unsigned int addr;	// 출력 위치 지정을 위한 입력변수(주소)
	char* kbuf[100];	// 출력 문자열 입력 공간

	printf("Address of stable space is %d[%08x].\n", buf, buf);
	printf("Enter the starting address : ");
	scanf("%d", &addr);	// 안전 공간 주소 참고
	pbuf = buf + addr;

	printf("Enter the string : ");
	scanf("%s", *kbuf);
	Copy(*pbuf, *kbuf);
	Dump(*buf, 100);
}

void Dump(char *p, int len)		// 메모리 공간 출력용 범용 함수
{
	for (int i = 0; i < len; i++)	// 안전 공간 메모리 덤프
	{	
		if (i % 16 == 0)	printf("\n%08x   ", p);
		if (i % 8 == 0)	printf("  ");
		printf("%02x ", (unsigned char)*p++);
	}
}

void Copy(char *p1, char *p2)
{
	while (*p2) *p1++ = *p2++; *p1 = 0;
}