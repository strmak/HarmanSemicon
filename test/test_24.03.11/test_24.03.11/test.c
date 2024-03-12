#include <stdio.h>
#include <conio.h>

int main()
{
	char* str[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Five", "Six", "Seven", "Eight", "Nine"};


	printf("Please enter the number!\nIf you want to exit the program, enter the 'q' !\n");	
	while(1)
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

		printf("%c: %s\n", c, str[c-0x30]);
	}
	return 0;
}