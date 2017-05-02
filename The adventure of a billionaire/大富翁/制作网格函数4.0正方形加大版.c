#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>
#include "extra.h";
void sheet(int m,int n)//make a function to make a sheet(m*n)
{
	int i,a,b,c,d;
	printf(" ");//for give a lookful line,give a " "at the first line
	for (i = 0; i <= m; i++)//circlation for the first line
		printf("______ ");//make the top of the sheet
	printf("\n");//change the line(the same to follow)
	printf("|");//make the first left line of the first row
	for (b = 0; b < n-1; b++)//circlation for the list
	{
		for (a = 0; a < n; a++)
			printf("      |");//make the first list line for the row
		printf("\n");
		printf("|");//make the left line for the second list line of the row
		for (c = 0; c < n; c++)
			printf("      |");//make the second list line for the row 
		printf("\n");
		printf("|");//make the left line for the third list line of the row
		for (d = 0; d < n; d++)
			printf("______|");//make the third list line for the row
		printf("\n");
		printf("|");//make the left line for the first line of the next row
	}
	if (b = n - 1)//we don't need the left line after the last line
	{
		for (a = 0; a < n; a++)
			printf("      |");
		printf("\n");
		printf("|");
		for (c = 0; c < n; c++)
			printf("      |");
		printf("\n");
		printf("|");
		for (d = 0; d < n; d++)
			printf("______|");
		printf("\n");//the same as up
	}
}