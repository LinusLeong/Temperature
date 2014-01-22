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

	printf("Option Chosed: %u\n", option);
	return 0;
}




