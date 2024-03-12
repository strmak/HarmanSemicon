#include <stdio.h>

void test();

void main() {
	test();
}

void test() 
{
	char ca[] = "Hello"; // ca[0]:'H' ... ca[4]=:'o' ca[5]:\0
	for (int i = 0; i < 10; i++) {
		printf("ca[%d]: %c  (%02x)\n", i,  ca[i], ca[i]);
	}
	ca[2] -= 1;
	ca[3] -= 1;
	for (int i = 0; i < 10; i++) {
		printf("ca[%d]: %c  (%02x)\n", i,  ca[i], ca[i]);
	}

}