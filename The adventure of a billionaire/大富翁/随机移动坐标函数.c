#include "extra.h"
int* gorand(player* head,int a, int b)
{
	int c, d, e, result[2];
	player *temp_1 = (player *)malloc(sizeof(player));
	player *temp_2 = (player *)malloc(sizeof(player));
	player *temp_3 = (player *)malloc(sizeof(player));
	temp_1 = head;
	head->x = a;
	head->y = b;
	while (temp_1->next)
	{
		temp_1 = temp_1->next;//切换至第二个节点
		if (c = a + (-1) ^ (suiji(2)))
		{
			a = c;
			d = a;
			temp_1->x = a;
			temp_1->y = b;
			temp_3 = temp_1->next;
			if (c = a + (-1) ^ (suiji(2)))
			{

				temp_3->x = d;
				temp_3->y = b;
				while (temp_3 == temp_2)
				{
					a = c;
					temp_3->x = a;
					temp_3->y = b;
					c = a + (-1) ^ (suiji(2));
				}
				a = c;
			}
			else
			{
				e = b + (-1) ^ (suiji(2));
				b = e;
			}
		}
		else if (e = b + (-1) ^ (suiji(2)))
		{
			b = e;
			d = b;
			temp_1->x = a;
			temp_1->y = b;
			temp_3 = temp_1->next;
			if (e = b + (-1) ^ (suiji(2)))
			{

				temp_3->x = a;
				temp_3->y = d;
				while (temp_3 == temp_2)
				{
					a = c;
					temp_3->x = a;
					temp_3->y = b;
					e = b + (-1) ^ (suiji(2));
				}
				b = e;
			}
			else
			{
				c = a + (-1) ^ (suiji(2));
				a = c;
			}
		}
	}
	result[0] = a;
	result[1] = b;
	return result;
}