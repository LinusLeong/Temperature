#include <stdio.h>
#include <string.h>
#include "colors.h"
#include "print.h"
#include "main.h"

void printhelp(void);

int main(int argc, char **argv)
{
	char types[TYPE_NUM][10] = {"celsius", "fahrenheit", "kelvin"};
	int option, start, i, from, to;
	if(argc < 2){
		printf(RED"Error: Not enough arguments given\n"RESET);
		printhelp();
		return 0;
	}

	option = getOption(argc, argv);
	printf("%d\n", option);
	switch(option)
	{
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
		return 0;
	case 4:
		return 0;
	default:
		printf("No option given.\n");
		break;
	}

	start = getFrom(argc, argv, types);
	from = getType(start, argv, types);
	printf("%d\t%d\n", start, from);
	//printf("Option Chosed: %u\n", option);
	return 0;
}

int getFrom(int size, char **str, char source[][10])
{
	int i, n;
	for (i=0; i<TYPE_NUM;i++) // loop though the source
	{
		for (n=0;n<size;n++) // loop through args
			if(!strncmp(str[n], source[i], ACCURACY))
				return n; //match
	}
	return -1;
}

int getType(int pos, char **str, char source[][10])
{
	int i;
	for(i=0;i<TYPE_NUM;i++)
	{
		if(!strncmp(str[pos], source[i], ACCURACY))
			return i;
	}
	return -1;
}


