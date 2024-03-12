#include <stdio.h>

void main() 
{
	// Hello, world!

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
	scanf("%c %d %d %f", &val_char, &val_int, &val_long, &val_float);
	
	printf("\n\n\n\n\n\nHello, world!\n\n\n\n\n\n");
	printf("  정수 출력 테스트 : [%12d]\n", val_int);
	printf("  실수 출력 테스트 : [%12.8f]\n", val_float);
	printf("  실수 출력 테스트 : [%12e]\n", val_double);

	printf(" 8진수 출력 테스트 : [%12o]\n", val_int);
	printf("16진수 출력 테스트 : [%12x]\n", val_int);

	printf("  문자 출력 테스트 : [%c]\n", val_char);
	printf("  문자 연산 테스트 : [%c]\n", val_char + 1);
}