#pragma once
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include <conio.h>
#include <time.h>
void gotoxy(int x, int y);
typedef struct user //����һ���ṹ�壬����������ҵ�·��
{
	int x;
	int y;
	struct user *next;

}player;
//typedef void(*fun)(int *,int*);
player* creatpoint(int x, int y);
player* add(player *head, player *p);
void jump(player *head,int oredr);
player* initialize(int m, int n);
int suiji(int x);//��������ɺ���
void bomb(int *hp, int*money);
void delline();
player* sheet(int m, int n);
void moneyup(int *hp, int*money);
void runfunction(int *hp, int *money);
void fullenergy(int *hp, int*money);