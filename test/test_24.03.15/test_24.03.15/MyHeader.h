#pragma once
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void swap(void* fir, void* sec);
void sort_str(char* str, int cnt);
void sort_num(char* str);
void* min_num(void* num_arr);
void* max_num(void* num_arr);


void swap(void* fir, void* sec)
{
	void* buf = fir;
	fir = sec;
	sec = buf;
}

void sort_str(char* str[], int cnt)
{
	char buf[100];
	for (int i = 0; i < cnt; i++)
	{
		for (int j = 0; j < cnt - 1; j++)
		{
			if (str[j] > str[j+1])
			{
				*buf = str[j];
				str[j] = str[j + 1];
				str[j + 1] = *buf;
			}
			printf("%s ", str[j]);
		}
	}
}
