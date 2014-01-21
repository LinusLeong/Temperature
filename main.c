#include <stdio.h>
#include "colors.h"

void printhelp(void);

int main(int argc, char **argv)
{
	char types[3][10] = {"celsius", "fahrenheit", "kelvin"};
	int i;
	if (argc < 3 && argv[2] != "-l")
	{
		printf(RED "Error: Wrong number of augument given!\n" RESET);
		printhelp();
		return 0;
	}
	return 0;
}

void printhelp(void)
{
	printf("Syntax: \ttemperature <options> <type(from)> <type(to)> <value>\n");
	printf("Options:\t-a: print out a nicer list of all types(ignores type(to);\n");
	printf("\t\t-l: list all types avaliable(ignores all arguments);\n");
	printf("\t\t-c: show the set-by-step flow of the program;\n");
	printf("\t\t-f: show all the formulas used in this program(ignores all arguments);\n");
	printf("\t\t-h: show this help;\n");	
}

