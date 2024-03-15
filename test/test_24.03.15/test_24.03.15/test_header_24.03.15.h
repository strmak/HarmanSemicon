#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#pragma once
#define PI 3.1415926535

void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();



void prob1()
{
	char buf[100];
	int len;

	printf("Please enter the string.\n");
	scanf("%s", buf);

	len = strlen(buf);
	for (int i = 0; i < len; i++)
	{
		buf[2 * (len - i)] = buf[len - i];
	}

	for (int i = 0; i < len; i++)
	{
		if (i != 0)	buf[2 * i - 1] = ' ';
	}

	for (int i = 0; i < 2 * len; i++)
	{
		if (buf[i] >= 'a' && buf[i] <= 'z')
		{
			buf[i] -= 32;
		}
	}

	printf("%s", buf);
}

void prob2()
{
	for (int cnt = 1; cnt < 128; cnt++)
	{
		switch (cnt)
		{
		case(7):
			printf("[%4d] | [%4x] | [%4s] ||     ", cnt, cnt, "BEL");
			break;
		case(8):
			printf("[%4d] | [%4x] | [%4s] ||     ", cnt, cnt, "BS");
			break;
		case(9):
			printf("[%4d] | [%4x] | [%4s] ||     ", cnt, cnt, "HT");
			break;
		case(10):
			printf("[%4d] | [%4x] | [%4s] ||     ", cnt, cnt, "LF");
			break;
		case(13):
			printf("[%4d] | [%4x] | [%4s] ||     ", cnt, cnt, "CR");
			break;
		case(27):
			printf("[%4d] | [%4x] | [%4s] ||     ", cnt, cnt, "ESC");
			break;
		default:
			printf("[%4d] | [%4x] | [%4c] ||     ", cnt, cnt, cnt);
			break;
		}
		if (cnt % 3 == 0 && (char)cnt != '\n')printf("\n");
	}
}

void prob3()
{
	int fir, sec, buf;
	printf("You can enter two number.\n");
	scanf("%d %d", &fir, &sec);

	printf("Before swap [First] = %d, [Second] = %d\n", fir, sec);
	buf = fir;
	fir = sec;
	sec = buf;
	printf("After  swap [First] = %d, [Second] = %d\n", fir, sec);
}

void prob4()
{
	int cnt = 0;

	printf("Enter the odd number.\n");
	scanf("%d", &cnt);

	for (int i = 0; i <= cnt / 2; i++)
	{
		for (int j = i; j < cnt / 2; j++)
		{
			printf(" ");
		}

		for (int k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void prob5()
{
	char buf;

	printf("Enter the alphabet.\n");
	scanf("\n%c", &buf);

	if (buf >= 'a' && buf <= 'z')	buf -= 32;
	// A 아스키코드 - 65

	for (int i = 65; i <= buf; i++)
	{
		for (int j = buf - i; j < buf - 65; j++)
		{
			printf(" ");
		}

		for (int k = i; k <= buf; k++)
		{
			printf("%c", i);
		}
		printf("\n");
	}
}

void prob6()
{
	int fir, sec, gcd;
	int cnt_fir = 0;
	int cnt_sec = 0;
	int fir_aliquot[100];
	int sec_aliquot[100];

	printf("Enter two number that you want to get the greatest common divisor.\n");
	scanf("%d %d", &fir, &sec);

	for (int i = 1; i <= fir; i++)
	{
		if (fir % i == 0)
		{
			fir_aliquot[cnt_fir] = i;
			cnt_fir++;
		}
	}
	for (int j = 1; j <= sec; j++)
	{
		if (sec % j == 0)
		{
			sec_aliquot[cnt_sec] = j;
			cnt_sec++;
		}
	}

	for (int k = 0; k < cnt_fir; k++)
	{
		for (int l = 0; l < cnt_sec; l++)
		{
			if (fir_aliquot[k] == sec_aliquot[l])
				gcd = fir_aliquot[k];
		}
	}
	printf("%d : ", fir);
	for (int i = 0; i < cnt_fir; i++) {
		printf("%d ", fir_aliquot[i]);
	}
	printf("\n%d : ", sec);
	for (int i = 0; i < cnt_sec; i++) {
		printf("%d ", sec_aliquot[i]);
	}
	printf("\nGreatest common divisor of (%d, %d) is [ %d ].\n", fir, sec, gcd);
}

void prob7()
{
	int point = 0;
	for (int i = 0; i <= 200; i++)
	{
		point = sin(i * PI / 100.0) * 100 + 100;
		for (int j = 0; j <= point; j++)
		{
			printf(" ");
			if (j == point)	printf("●\n");
		}
	}
}
