/*
 * print.c

 *
 *  Created on: 22 Jan, 2014
 *      Author: leenux
 */

#include <stdio.h>
#include "print.h"

void printhelp(void)
{
	printf("Syntax: \ttemperature <options> <type(from)> <type(to)> <value>\n");
	printf("Options:\t-a*: print out a nicer list of all types(ignores type(to);\n");
	printf("\t\t-l*: list all types avaliable(ignores all arguments);\n");
	printf("\t\t-c*: show the set-by-step flow of the program;\n");
	printf("\t\t-f*: show all the formulas used in this program(ignores all arguments);\n");
	printf("\t\t-h*: show this help;\n");
}

int getOption(int num, char ** str)
{
	short i, o=-1;

	return (int)o;
}
