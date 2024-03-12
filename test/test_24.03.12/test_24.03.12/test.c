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
	char buf[100];		// ���� �޸� ����
	char* pbuf;			// ���� �޸� �������� ��� ��ġ
	unsigned int addr;	// ��� ��ġ ������ ���� �Էº���(�ּ�)
	char kbuf[100];	// ��� ���ڿ� �Է� ����

	printf("Address of stable space is %d[%08x].\n", (unsigned int)buf, buf);
	printf("Enter the starting address : ");
	scanf("%d", &addr);	// ���� ���� �ּ� ����
	pbuf = buf + addr;

	printf("Enter the string : ");
	scanf("%s", kbuf);
	Copy(pbuf, kbuf);
	Dump(buf, 100);
}

void Dump(char *p, int len)		// �޸� ���� ��¿� ���� �Լ�
{
	for (int i = 0; i < len; i++)	// ���� ���� �޸� ����
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