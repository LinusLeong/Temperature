#include <stdio.h>
#include "colors.h"

#define PLACE_HOLDER_PLS_INGORE

void printhelp(void);

int main(int argc, char **argv)
{
	char types[3][10] = {"celsius", "fahrenheit", "kelvin"};
	unsigned short int option=0;
	int i;
	if(argc < 2){
		printf(RED"Error: Not enough arguments given\n"RESET);
		printhelp();
	}
	for (i=0;i<argc;i++)
	{
		switch(argv[i][1])
		{
			case 'l':
				option = 0;
				break;
			case 'h':
				option = 1;
				break;
			case 'f':
				option = 2;
				break;
			case 'a':
				option = 3;
				break;
			case 'c':
				option = 4;
				break;
			default:
				break;				
		}
	}
	printf("Option Chosed: %u\n", option);
	return 0;
}

void printhelp(void)
{
	printf("Syntax: \ttemperature <options> <type(from)> <type(to)> <value>\n");
	printf("Options:\t-a*: print out a nicer list of all types(ignores type(to);\n");
	printf("\t\t-l*: list all types avaliable(ignores all arguments);\n");
	printf("\t\t-c*: show the set-by-step flow of the program;\n");
	printf("\t\t-f*: show all the formulas used in this program(ignores all arguments);\n");
	printf("\t\t-h*: show this help;\n");	
}

