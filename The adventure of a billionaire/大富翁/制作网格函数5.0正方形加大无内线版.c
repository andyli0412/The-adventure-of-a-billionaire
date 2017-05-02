
#include "extra.h"
player* sheet(int m,int n)//make a function to make a sheet(m*n)
{
	int i,a,b,c,d,e = 1, f = 1;
	player *head, *temp;
	printf(" ");//for give a lookful line,give a " "at the first line
	for (i = 0; i <= m-1; i++)//circlation for the first line
		printf("_______");
	if (i=m-1)
		printf("______");//make the top of the sheet
	printf("\n");//change the line(the same to follow)
	printf("|");//make the first left line of the first row
	for (b = 0; b < n-1; b++)//circlation for the list
	{
		for (a = 0; a < n-1; a++)
			printf("       ");//make the first list line for the row
		if (a=n-1)
			printf("      |");
		printf("\n");
		printf("|");//make the left line for the second list line of the row
		for (c = 0; c < n-1; c++)
			printf("       ");//make the second list line for the row 
		if (c = n - 1)
			printf("      |");
		printf("\n");
		printf("|");//make the left line for the third list line of the row
		for (d = 0; d < n-1; d++)
			printf("       ");//make the third list line for the row
		if (d = n - 1)
			printf("      |");
		printf("\n");
		printf("|");//make the left line for the first line of the next row
	}
	if (b = n - 1)//we don't need the left line after the last line
	{
		for (a = 0; a < n-1; a++)
			printf("       ");
		if (a = n - 1)
			printf("      |");
		printf("\n");
		printf("|");
		for (c = 0; c < n-1; c++)
			printf("       ");
		if (c = n - 1)
			printf("      |");
		printf("\n");
		printf("|");
		for (d = 0; d < n-1; d++)
			printf("_______");
		if (d = n - 1)
			printf("______|");
		printf("\n");//the same as up
	}
	head = NULL;
	e = 1;
	f = 1;
	//建立环状路径
	for (;f <= n;f++)//建立第一列的路径点
	{
		head = add(head, creatpoint(e, f));
	}
	for (e++, f--;e <= m; e++)//建立最后一行的路径点
	{
		head = add(head, creatpoint(e, f));
	}
	for (e--, f--;f >= 1;f--)//从最后一行倒退回第一行，并沿途建立路径
	{
		head = add(head, creatpoint(e, f));

	}
	for (f++, e--;e >= 1;e--)//从最后一列倒回第一列，并沿途建立路径
	{
		head = add(head, creatpoint(e, f));
	}
	temp = head;
	while (temp->next != NULL)//将最后一个路径点的下一个指向第一个，使整个路径封闭
		temp = temp->next;
	temp->next = head;
	return head;
}