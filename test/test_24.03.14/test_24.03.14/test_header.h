#include <stdio.h>
#include <conio.h>
#include <string>

void test01();	// 숫자키에 대한 문자열 출력
void test02();	// 문자열과 문자배열
void test03();	// 포인터의 위치 지정
void Dump(char* p, int len);
void Copy(char* p1, char* p2);
void test04();	// 문자열을 이용한 포인트 함수
void test05();	// 구조체 텍스트
void test06();
void test07();
int Length(char* str);


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
	printf("문자, 정수(int), 정수(long), 실수(float)를 각각 입력하세요.\n");
	scanf("%c %d %d %f", &val_char, &val_int, &val_long, &val_float);

	printf("  정수 출력 테스트 : [%12d]\n", val_int);
	printf("  실수 출력 테스트 : [%12.8f]\n", val_float);
	printf("  실수 출력 테스트 : [%12e]\n", val_double);

	printf(" 8진수 출력 테스트 : [%12o]\n", val_int);
	printf("16진수 출력 테스트 : [%12x]\n", val_int);

	printf("  문자 출력 테스트 : [%c]\n", val_char);
	printf("  문자 연산 테스트 : [%c]\n", val_char + 1);
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
	char buf[100];		// 안전 메모리 공간
	char* pbuf;			// 안전 메모리 공간중의 출력 위치
	unsigned int addr;	// 출력 위치 지정을 위한 입력변수(주소)
	char kbuf[100];	// 출력 문자열 입력 공간

	printf("Address of stable space is %d[%08x].\n", (unsigned int)buf, buf);
	printf("Enter the starting address : ");
	scanf("%d", &addr);	// 안전 공간 주소 참고
	pbuf = buf + addr;

	printf("Enter the string : ");
	scanf("%s", kbuf);
	Copy(pbuf, kbuf);
	Dump(buf, 100);
}

void Dump(char* p, int len)		// 메모리 공간 출력용 범용 함수
{
	for (int i = 0; i < len; i++)	// 안전 공간 메모리 덤프
	{
		if (i % 16 == 0)	printf("\n%08x   ", p);
		if (i % 8 == 0)	printf("  ");
		printf("%02x ", (unsigned char)*p++);
	}
}

void Copy(char* p1, char* p2)
{
	//------함수의 설계------
	// 함수명 : Copy
	// 기능 : p2 문자열을 인수로 받아서 p1 문자열로 복사
	// 인수 : 타겟문자열, 소스문자열 - char *p1, char *p2
	// 리턴값 : void
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
	s1.name = "삼천갑자 동방삭";
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

int Length(char* str)
{
	//------함수의 설계------
	// 함수명 : Length
	// 기능 : 문자열을 인수로 받아서 문자열의 길이를 반환
	// 인수 : 문자열 - char* str
	// 리턴값 : 문자열의 길이 - int len

	int len = 0;

	while (1)
	{
		if (*str++ == '\0')	break;	// *str++ == *(str+len)
		len++;
	}

	return len;
}