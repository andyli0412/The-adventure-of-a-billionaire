#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>
#include "extra.h";
#include<iostream>
#include <time.h> //use time function
int suiji(int x)
{
	int number;//variable for the random number
	srand((unsigned)time(NULL)); //use time function to form the random number
	number = 1+ rand() % x;  //make the random number from 1 to 6
	printf("%d\n", number);
	return number;
}
void main(void)
{
	suiji(6);
}