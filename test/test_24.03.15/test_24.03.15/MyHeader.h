#pragma once
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void swap(void* fir, void* sec);
void sort_str(void* fir, void* sec);

void swap(void* fir, void* sec)
{
	void* buf = fir;
	fir = sec;
	sec = buf;
}