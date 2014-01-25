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
	for (i=0;i<num;i++)
		{
			switch(str[i][1])
			{
				case 'l':
					o = 0;
					break;
				case 'h':
					o = 1;
					break;
				case 'f':
					o = 2;
					break;
				case 'a':
					o = 3;
					break;
				case 'c':
					o = 4;
					break;
				default:
					o = -1;
					break;
			}
		}
	return (int)o;
}
