#include "extra.h"
//������ӵĲ���������ö��������и�ʽ���б�д
void bomb(int *hp,int*money)
{
	int i = *hp;
	*hp = i - suiji(50);
	if (*hp <= 0)
		*hp = 0;
	//������ʾ����ը����������ʾ����Ļ�ϱ���һ������
	gotoxy(7, 3);
	printf("You are booooombed!!!\a");
	Sleep(1000);
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                               ");
}
