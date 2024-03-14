#include <stdio.h>
#include <conio.h>
#include <string.h>
#pragma once

void test01();	// ����Ű�� ���� ���ڿ� ���
void test02();	// ���ڿ��� ���ڹ迭
void test03();	// �������� ��ġ ����
void Dump(char* p, int len);
void Copy(char* p1, char* p2);
void test04();	// ���ڿ��� �̿��� ����Ʈ �Լ�
void test05();	// ����ü �ؽ�Ʈ
void test06();
void test07();
void test08();
int Length(char* str);
int Compare(char* s1, char* s2);


void test01()
{
	char val_char;
	int val_int;
	long val_long;
	float val_float;
	double val_double;

	//val_char = 'f';
	//val_int = 10;
	//val_long = 4000000000;
	//val_float = 3.1415926589;
	//val_double = 31415926589.123456789;


	printf(" %8x\n %8x\n %8x\n %8x\n", &val_char, &val_int, &val_long, &val_double);
	printf("����, ����(int), ����(long), �Ǽ�(float)�� ���� �Է��ϼ���.\n");
	scanf("%c %d %d %f", &val_char, &val_int, &val_long, &val_float);

	printf("  ���� ��� �׽�Ʈ : [%12d]\n", val_int);
	printf("  �Ǽ� ��� �׽�Ʈ : [%12.8f]\n", val_float);
	printf("  �Ǽ� ��� �׽�Ʈ : [%12e]\n", val_double);

	printf(" 8���� ��� �׽�Ʈ : [%12o]\n", val_int);
	printf("16���� ��� �׽�Ʈ : [%12x]\n", val_int);

	printf("  ���� ��� �׽�Ʈ : [%c]\n", val_char);
	printf("  ���� ���� �׽�Ʈ : [%c]\n", val_char + 1);
}

void test02()
{
	const char* str[] = { "Zero", "One", "Two", "Three", "Four", "Five", "Five", "Six", "Seven", "Eight", "Nine" };


	printf("Please enter the number!\nIf you want to exit the program, enter the 'q' !\n");
	while (1)
	{

		char c = getch();
		/*if (c == '1')			printf("1 : One\n");
		else if (c == '2')			printf("2 : Two\n");
		else if (c == '3')			printf("3 : Three\n");
		else if (c == '4')			printf("4 : Four\n");
		else if (c == '5')			printf("5 : Five\n");
		else if (c == '6')			printf("6 : Six\n");
		else if (c == '7')			printf("7 : Seven\n");
		else if (c == '8')			printf("8 : Eight\n");
		else if (c == '9')			printf("9 : Nine\n");
		else if (c == '0')			printf("0 : Zero\n");
		else if (c == 'q')
		{
			printf("Exit the program.\n");
			break;
		}
		else			printf("This is not unavailable number.\n");*/
		if (c == 'q')	break;
		printf("%c: %s\n", c, str[c - 0x30]);
	}
}

void test03()
{
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

void Dump(char* p, int len)		// �޸� ���� ��¿� ���� �Լ�
{
	for (int i = 0; i < len; i++)	// ���� ���� �޸� ����
	{
		if (i % 16 == 0)	printf("\n%08x   ", p);
		if (i % 8 == 0)	printf("  ");
		printf("%02x ", (unsigned char)*p++);
	}
}

void Copy(char* p1, char* p2)
{
	//------�Լ��� ����------
	// �Լ��� : Copy
	// ��� : p2 ���ڿ��� �μ��� �޾Ƽ� p1 ���ڿ��� ����
	// �μ� : Ÿ�ٹ��ڿ�, �ҽ����ڿ� - char *p1, char *p2
	// ���ϰ� : void
	while (*p2) *p1++ = *p2++; *p1 = 0;
}

void test04()
{
	const char* arr[10] = { "aaaaa", "bbbb", "ccc", "dd", "e" };
	char buf[100];

	printf("[6] ");
	scanf("%s", buf);
	arr[6] = buf;

	printf("[7] ");
	scanf("%s", buf + 50);
	arr[7] = buf + 50;
	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d] : 0x%08x   %s\n", i, arr[i], arr[i]);
	}
}

void test05()
{
	struct stTest
	{
		int i;
		float a;
		const char* name;
	} s1 = { 1, 3.14 };
	s1.name = "��õ���� �����";
	struct stTest s2 = s1;

	printf("sizeof(struct stTest) : %d\n", sizeof(struct stTest));

	printf("struct stText s1 : %d, %f, %s\n", s1.i, s1.a, s1.name);
	printf("struct stText s2 : %d, %f, %s\n", s2.i, s2.a, s2.name);
}

void test06()
{
	const char* s1 = "Good";
	const char* s2 = "afternoon";
	char buf[100];

	// strlen strcpy strcat Test
	printf("s1 : %s (%d)\n", s1, strlen(s1));
	printf("s2 : %s (%d)\n", s2, strlen(s2));
	strcpy(buf, s1);
	strcat(buf, s2);
	printf("strcat(s1,s2) : %s (%d)\n", buf, strlen(buf));
	//sprintf(buf, "strcat(s1,s2) : %s %s\n", s1, s2);
	//printf("%s", buf);
}

void test07()
{
	char buf[100];

	printf("Enter the string.\n");
	scanf("%s", buf);

	printf("Length of the string is [ %d ]\n", Length(buf));
}

void test08()
{
	char buf1[100];
	char buf2[100];

	printf("Enter the two string.\n");
	scanf("%s %s", buf1, buf2);

	switch (Compare(buf1, buf2))
	{
	case(1):
		printf("First string is bigger than another.\n");
		break;
	case(-1):
		printf("Second string is bigger than another.\n");
		break;
	case(0):
		printf("Two string is same.\n");
		break;
	}
}

int Length(char* str)
{
	//------�Լ��� ����------
	// �Լ��� : Length
	// ��� : ���ڿ��� �μ��� �޾Ƽ� ���ڿ��� ���̸� ��ȯ
	// �μ� : ���ڿ� - char* str
	// ���ϰ� : ���ڿ��� ���� - int len

	int len = 0;

	while (1)
	{
		if (*str++ == '\0')	break;	// *str++ == *(str+len)
		len++;
	}

	return len;
}

int Compare(char* s1, char* s2)
{
	int result = 0;
	int len = Length(s1);

	for (int i = 0; i < len; i++)
	{
		if (*(s1 + len) > *(s2 + len))
		{
			result = 1;
			break;
		}
		else if (*(s1 + len) < *(s2 + len))
		{
			result = -1;
			break;
		}
		else if (*(s1 + len) == *(s2 + len))
		{
			result = 0;
			continue;
		}
	}

	return result;
}
