#include <stdio.h>
#include "colors.h"
#include "print.h"

#define VER_MAJOR 0
#define VER_MINOR 1
#define TYPE_NUM 3

void printhelp(void);

int main(int argc, char **argv)
{
	char types[TYPE_NUM][10] = {"celsius", "fahrenheit", "kelvin"};
	int option;
	int i;
	if(argc < 2){
		printf(RED"Error: Not enough arguments given\n"RESET);
		printhelp();
	}
	option = getOption(argc, argv);
	printf("%d\n", option);
	switch(option)
	{
	case -1: break;
	case 0:
		printf("==<Types Available>==\n");
		for (i=0;i<TYPE_NUM;i++)
			printf("%s\n", types[i]);
		printf("=====================\n");
		return 0;
	case 1:
		return 0;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		printf("An Error Occured!\n");
		break;
	}
	switch(option)
	printf("Option Chosed: %u\n", option);
	return 0;
}




